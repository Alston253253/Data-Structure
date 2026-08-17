#include <stdio.h>

int main() {
    int arr[10];
    int search, found = 0;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nEnter element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
