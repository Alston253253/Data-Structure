#include <stdio.h>

int main() {
    int A[3], B[3], C[6];

    printf("Enter 3 elements for array A:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter 3 elements for array B:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 3; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 3; i++) {
        C[i + 3] = B[i];
    }

    printf("\nMerged array C: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
