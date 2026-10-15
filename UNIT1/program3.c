#include <stdio.h>

int main()
{
    int A[3], B[3], C[3], i;

    for(i = 0; i < 3; i++)
        scanf("%d", &A[i]);

    for(i = 0; i < 3; i++)
        scanf("%d", &B[i]);

    for(i = 0; i < 3; i++)
        C[i] = A[i] + B[i];

    for(i = 0; i < 3; i++)
        printf("%d ", C[i]);

    return 0;
}
