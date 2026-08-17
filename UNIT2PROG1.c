#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top >= MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = val;
        printf("Pushed %d onto stack.\n", val);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow!\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void print() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

void peep(int i) {
    if (top - i + 1 < 0 || i <= 0) {
        printf("Invalid position!\n");
    } else {
        printf("Element at position %d from top: %d\n", i, stack[top - i + 1]);
    }
}

void change(int i, int val) {
    if (top - i + 1 < 0 || i <= 0) {
        printf("Invalid position!\n");
    } else {
        stack[top - i + 1] = val;
        printf("Changed element at position %d from top to %d.\n", i, val);
    }
}

int main() {
    int choice, val, pos;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Print\n4. Peek\n5. Peep\n6. Change\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Enter position from top (1 for top): ");
                scanf("%d", &pos);
                peep(pos);
                break;
            case 6:
                printf("Enter position from top (1 for top): ");
                scanf("%d", &pos);
                printf("Enter new value: ");
                scanf("%d", &val);
                change(pos, val);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
