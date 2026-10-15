#include <stdio.h>

int main() {
    int arr[10];
    int max;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nLargest value = %d\n", max);

    return 0;
}
