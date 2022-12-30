#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include<unistd.h>

#define BUFFER_SIZE 10

// The buffer
int buffer[BUFFER_SIZE];

// The indices for the producer and consumer
int producerIndex = 0;
int consumerIndex = 0;

void *producer(void *arg) {
  // Produce an item and put it in the buffer
  while (1) {
    int item = rand(); // Generate a random item
    buffer[producerIndex] = item; // Put the item in the buffer
    producerIndex = (producerIndex + 1) % BUFFER_SIZE; // Increment the producer index
  }
}

void *consumer(void *arg) {
  // Get an item from the buffer
  while (1) {
    int item = buffer[consumerIndex]; // Get the item from the buffer
    consumerIndex = (consumerIndex + 1) % BUFFER_SIZE; // Increment the consumer index
  }
}

void *display(void *arg) {
  // Display the items in the buffer and the order that the consumer gets the items
  while (1) {
    printf("Buffer: [");
    for (int i = 0; i < BUFFER_SIZE; i++) {
      printf("%d ", buffer[i]);
    }
    printf("]\n");
    printf("Consumer order: [");
    for (int i = consumerIndex; i < consumerIndex + BUFFER_SIZE; i++) {
      printf("%d ", buffer[i % BUFFER_SIZE]);
    }
    printf("]\n");
    sleep(10); // Sleep for 10 seconds
  }
}

int main() {
  // Create the producer, consumer, and display threads
  pthread_t producerThread;
  pthread_t consumerThread;
  pthread_t displayThread;
  pthread_create(&producerThread, NULL, producer, NULL);
  pthread_create(&consumerThread, NULL, consumer, NULL);
  pthread_create(&displayThread, NULL, display, NULL);

  // Wait for the threads to finish
  pthread_join(producerThread, NULL);
  pthread_join(consumerThread, NULL);
  pthread_join(displayThread, NULL);

  return 0;
}
