#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 10  // Size of the buffer
#define NUM_PRODUCERS 3  // Number of producer threads
#define NUM_CONSUMERS 3  // Number of consumer threads

// Global variables
int buffer[BUFFER_SIZE];  // The buffer
int in = 0;  // Index to add the next element to the buffer
int out = 0;  // Index to remove the next element from the buffer
int count = 0;  // Number of elements in the buffer
pthread_mutex_t mutex;  // Mutex for synchronization
pthread_cond_t empty;  // Condition variable for empty buffer
pthread_cond_t full;  // Condition variable for full buffer

// Function for the producer threads
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
            pthread_cond_wait(&full, &mutex);

        // Add the value to the buffer
        buffer[in] = value;
        in = (in + 1) % BUFFER_SIZE;
        count++;
        printf("Producer %d produced %d\n", id+1, value);

        // Signal that the buffer is not empty
        pthread_cond_signal(&empty);

        // Release the mutex lock
        pthread_mutex_unlock(&mutex);

        // Increment the value for the next iteration
        value++;
        getchar();
    }

    return NULL;
}

// Function for the consumer threads
void* consumer(void* arg)
{
    int id = *(int*)arg;  // ID of the consumer thread

    while (1)
    {
        // Acquire the mutex lock
        pthread_mutex_lock(&mutex);

        // Wait until the buffer is not empty
        while (count == 0)
            pthread_cond_wait(&empty, &mutex);

        // Remove a value from the buffer
        int value = buffer[out];
        out = (out + 1) % BUFFER_SIZE;
        count--;
        printf("Consumer %d consumed %d\n", id+1, value);

        // Signal that the buffer is not full
        pthread_cond_signal(&full);

        // Release the mutex lock
        pthread_mutex_unlock(&mutex);
        getchar();
      }

    return NULL;
}

int main(void)
{
    pthread_t producer_threads[NUM_PRODUCERS];  // Array of producer threads
    pthread_t consumer_threads[NUM_CONSUMERS];  // Array of consumer threads
    int producer_ids[NUM_PRODUCERS];  // Array of producer IDs
    int consumer_ids[NUM_CONSUMERS];  // Array of consumer IDs

    // Initialize the mutex and condition variables
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&empty, NULL);
    pthread_cond_init(&full, NULL);

    // Create the producer threads
    for (int i = 0; i < NUM_PRODUCERS; i++)
    {
        producer_ids[i] = i;
        if (pthread_create(&producer_threads[i], NULL, producer, &producer_ids[i]) != 0)
        {
            perror("Error creating producer thread");
            return 1;
        }
    }

    // Create the consumer threads
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
