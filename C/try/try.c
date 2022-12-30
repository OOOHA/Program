#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<pthread.h>
#include<unistd.h>

#define BUFFER_SIZE 10
#define NUM_PRODUCERS 5  // Number of producer threads
#define NUM_CONSUMERS 3  // Number of consumer threads

int buffer[BUFFER_SIZE] = {0};
int in = 0;
int out = 0;
int count = 0;

pthread_mutex_t mutex;  // Mutex for synchronization
pthread_cond_t empty;  // Condition variable for empty buffer
pthread_cond_t full;  // Condition variable for full buffer

void *producer();
void *consumer();
void *display();

int main()
{
    srand(time(NULL));
    pthread_t producer_threads[NUM_PRODUCERS];  // Array of producer threads
    pthread_t consumer_threads[NUM_CONSUMERS];  // Array of consumer threads
    pthread_t display_threads;  // Array of display threads

    int producer_ids[NUM_PRODUCERS];  // Array of producer IDs
    int consumer_ids[NUM_CONSUMERS];  // Array of consumer IDs


    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&empty, NULL);
    pthread_cond_init(&full, NULL);

    for (int i = 0; i < NUM_PRODUCERS; i++)
    {
        producer_ids[i] = i;
        if (pthread_create(&producer_threads[i], NULL, producer, &producer_ids[i]) != 0)
        {
            perror("Error creating producer thread");
            return 1;
        }
    }

    for (int i = 0; i < NUM_CONSUMERS; i++)
    {
        consumer_ids[i] = i;
        if (pthread_create(&consumer_threads[i], NULL, consumer, &consumer_ids[i]) != 0)
        {
            perror("Error creating consumer thread");
            return 1;
        }
    }

    // Wait for all threads to complete
    for (int i = 0; i < NUM_PRODUCERS; i++)
    {
        if (pthread_join(producer_threads[i], NULL) != 0)
        {
            perror("Error joining producer thread");
            return 1;
        }
    }
    for (int i = 0; i < NUM_CONSUMERS; i++)
    {
        if (pthread_join(consumer_threads[i], NULL) != 0)
        {
            perror("Error joining consumer thread");
            return 1;
        }
    }

    // Clean up the mutex and condition variables
    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&empty);
    pthread_cond_destroy(&full);

    return 0;
}

void* producer(void* arg)
{
    int id = *(int*)arg;  // ID of the producer thread
    int value = 0;  // Value to be produced

    while (1)
    {
        // Acquire the mutex lock
        pthread_mutex_lock(&mutex);

        // Wait until the buffer is not full
        while (count == BUFFER_SIZE)
        {
            printf("Producer %d is waiting, buffer is full\n", id+1);
            pthread_cond_wait(&full, &mutex);
        }

        // Add the value to the buffer
        value = rand() % 100 + 1;
        buffer[in] = value;
        printf("\nProducer %d produced %d\n", id+1, value);

        pthread_t display_threads;  // Array of display threads
        if (pthread_create(&display_threads, NULL, display, NULL) != 0)
        {
            perror("Error creating display thread");
            return NULL;
        }

        in = (in + 1) % BUFFER_SIZE;
        count++;
        // Signal that the buffer is not empty
        pthread_cond_signal(&empty);

        // Release the mutex lock
        pthread_mutex_unlock(&mutex);

        sleep(10);
    }

    return NULL;
}
void *consumer(void* arg)
{
    int id = *(int*)arg;  // ID of the consumer thread

    while (1)
    {
        // Acquire the mutex lock
        pthread_mutex_lock(&mutex);

        // Wait until the buffer is not empty
        while (count == 0)
        {
            printf("Consumer %d is waiting, buffer is empty", id+1);
            pthread_cond_wait(&empty, &mutex);
        }

        // Remove a value from the buffer
        int value = buffer[out];
        buffer[out] = 0;

        out = (out + 1) % BUFFER_SIZE;
        count--;
        printf("\nConsumer %d consumed %d\n", id+1, value);
        pthread_t display_threads;  // Array of display threads
        if (pthread_create(&display_threads, NULL, display, NULL) != 0)
        {
            perror("Error creating display thread");
            return NULL;
        }

        // Signal that the buffer is not full
        pthread_cond_signal(&full);

        // Release the mutex lock
        pthread_mutex_unlock(&mutex);


        sleep(2);
    }
    return NULL;
}
void *display()
{
    sleep(10);
    printf("Buffer: ");
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("%d ", buffer[i]);
    }
    
    printf("\n");
    return NULL;
}