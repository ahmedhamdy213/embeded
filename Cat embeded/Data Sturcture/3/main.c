#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void initialize(struct Queue *queue) {
    queue->front = queue->rear = -1;
}

int isEmpty(struct Queue *queue) {
    return queue->front == -1;
}

int isFull(struct Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->arr[queue->rear] = value;
}

int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }

    int dequeuedValue = queue->arr[queue->front];

    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return dequeuedValue;
}

int front(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue->arr[queue->front];
}

void main() {
      struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 500);
    enqueue(&queue, 800);
    enqueue(&queue, 800);
    enqueue(&queue, 800);
    enqueue(&queue, 800);
    enqueue(&queue, 800);
    enqueue(&queue, 800);
    //we controll; size from # define MAX_SIZE 10
    printf("Is Full = %d\n",isFull(&queue));

    printf("Front element: %d\n", front(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));

    printf("Front element: %d\n", front(&queue));


}
