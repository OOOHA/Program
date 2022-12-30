#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define BUFFER_SIZE 10  // Size of the buffer
#define NUM_PRODUCERS 3  // Number of producer threads
#define NUM_CONSUMERS 3  // Number of consumer threads
#define NUM_DISPLAYERS 3  // Number of display threads

// Global variables
int buffer[BUFFER_SIZE];  // The buffer
int in = 0;  // Index to add the next element to the buffer
int out = 0;  // Index to remove the next element from the buffer
int count = 0;  // Number of elements in the buffer

// Function for the producer threads
void* producer(void* arg)
{
    int id = *(int*)arg;  // ID of the producer thread

    while (1)
    {
        // Generate a random value
        int value = rand();

        // Add the value to the buffer
        buffer[in] = value;
        in = (in + 1) % BUFFER_SIZE;
        count++;
        printf("Producer %d produced %d\n", id, value);
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
        // Remove a value from the buffer
        int value = buffer[out];
        out = (out + 1) % BUFFER_SIZE;
        count--;
        printf("Consumer %d consumed %d\n", id, value);
        getchar();
    }

    return NULL;
}

// Function for the display threads
void* displayer(void* arg)
{
    int id = *(int*)arg;  // ID of the display thread

    while (1)
    {
        // Sleep for 10 seconds
        sleep(10);

        // Display the values in the buffer and the order that the consumers get the items
        printf("Displayer %d:\n", id);
        for (int i = out; i != in; i = (i + 1) % BUFFER_SIZE)
            printf("  %d\n", buffer[i]);
        printf("\n");
        getchar();
    }

    return NULL;
}

int main(void)
{/*
    pthread_t producer_threads[NUM_PRODUCERS];  // Array of producer threads
    pthread_t consumer_threads[NUM_CONSUMERS];  // Array of consumer threads
    pthread_t displayer_threads[NUM_DISPLAYERS];  // Array of displayer threads
    int producer_ids[NUM_PRODUCERS];  // Array of producer IDs
    int consumer_ids[NUM_CONSUMERS];  // Array of consumer IDs
    int displayer_ids[NUM_DISPLAYERS];  // Array of displayer IDs

    // Seed the random number generator
    srand(time(NULL));

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

    // Create the displayer threads
    for (int i = 0; i < NUM_DISPLAYERS; i++)
    {
        displayer_ids[i] = i;
        if (pthread_create(&displayer_threads[i], NULL, displayer, &displayer_ids[i]) != 0)
        {
            perror("Error creating displayer thread");
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
    for (int i = 0; i < NUM_DISPLAYERS; i++)
    {
        if (pthread_join(displayer_threads[i], NULL) != 0)
        {
            perror("Error joining displayer thread");
            return 1;
        }
    }*/

    int a = 0;
    scanf("%d", &a);

    sleep(a);
    printf("123");

    return 0;
}

