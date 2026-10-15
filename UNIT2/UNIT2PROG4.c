#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1) {
        stack[++top] = val;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return 1;
}

int main() {
    int n;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        push(i);
    }

    while (top >= 0) {
        factorial *= pop();
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
