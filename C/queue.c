#include <stdio.h>
#define MAX_SIZE 100

struct Queue {
    int data[MAX_SIZE];
    int front, rear;
};

void enqueue(struct Queue* queue, int value) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    queue->data[++queue->rear] = value;
}

int dequeue(struct Queue* queue) {
    if (queue->front > queue->rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->data[queue->front++];
}

int main() {
    struct Queue queue;
    queue.front = 0;
    queue.rear = -1;

    enqueue(&queue, 1);
    enqueue(&queue, 2);

    printf("%d\n", dequeue(&queue));
    printf("%d\n", dequeue(&queue));

    return 0;
}
