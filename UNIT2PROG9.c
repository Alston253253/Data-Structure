#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow!\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Inserted %d into queue.\n", value);
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
    } else {
        printf("Deleted %d from queue.\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Current Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    delete();

    display();

    return 0;
}
