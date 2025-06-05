#include <stdio.h>
#include <stdlib.h>

// Define a structure for the linked list node
typedef struct Node {
    int order_id;           // Example field to store order information
    struct Node* next;      // Pointer to the next node
} Node;

// Define a structure for the Queue
typedef struct Queue {
    Node* front;            // Points to the front of the queue
    Node* rear;             // Points to the rear of the queue
} Queue;

// Function to create a new queue
Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to create a new node
Node* createNode(int order_id) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->order_id = order_id;
    newNode->next = NULL;
    return newNode;
}

// Function to add an order to the queue (enqueue)
void enqueue(Queue* q, int order_id) {
    Node* newNode = createNode(order_id);
    if (q->rear == NULL) {
        q->front = q->rear = newNode;  // If the queue is empty, front and rear are the same
        return;
    }
    q->rear->next = newNode;  // Add the new node at the end of the queue
    q->rear = newNode;        // Update the rear pointer
}

// Function to remove an order from the queue (dequeue)
int dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return -1;  // Return -1 if the queue is empty
    }
    Node* temp = q->front;
    int order_id = temp->order_id;  // Get the order ID at the front
    q->front = q->front->next;      // Move the front pointer to the next node

    // If the queue is empty after the dequeue, update the rear pointer to NULL
    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);  // Free the memory of the dequeued node
    return order_id;
}

// Function to display the orders in the queue
void displayQueue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    Node* temp = q->front;
    printf("Orders in the queue: ");
    while (temp != NULL) {
        printf("%d ", temp->order_id);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Queue* orderQueue = createQueue();  // Create a new queue

    // Add some orders to the queue (enqueue)
    enqueue(orderQueue, 101);
    enqueue(orderQueue, 102);
    enqueue(orderQueue, 103);

    // Display the current queue
    displayQueue(orderQueue);

    // Remove an order from the queue (dequeue)
    int order = dequeue(orderQueue);
    printf("Order %d has been processed\n", order);

    // Display the queue after dequeue
    displayQueue(orderQueue);

    // Clean up
    free(orderQueue);

    return 0;
}
