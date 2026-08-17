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
    int base, exp;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 0; i < exp; i++) {
        push(base);
    }

    while (top >= 0) {
        result *= pop();
    }

    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}
