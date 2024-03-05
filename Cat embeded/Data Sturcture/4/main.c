#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Queue {
    struct Node *front, *rear;
};

void initialize(struct Queue *queue) {
    queue->front = queue->rear = NULL;
}

int isEmpty(struct Queue *queue) {
    return queue->front == NULL;
}

void enqueue(struct Queue *queue, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }

    struct Node *temp = queue->front;
    int dequeuedValue = temp->data;

    if (queue->front == queue->rear) {
        queue->front = queue->rear = NULL;
    } else {
        queue->front = temp->next;
    }

    free(temp);
    return dequeuedValue;
}

int front(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue->front->data;
}

void display(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    struct Node *current = queue->front;
    printf("Queue: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void main() {
    struct Queue queue;
    initialize(&queue);

    printf("Is Empty =  %d\n" ,  isEmpty(&queue));
    printf("Front element: %d\n", front(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));

    enqueue(&queue, 10);
    printf("Dequeued element: %d\n", dequeue(&queue));
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    display(&queue);

    printf("Front element: %d\n", front(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Is Empty =  %d\n" ,  isEmpty(&queue));

    display(&queue);


}
