//Merge two arrays.
#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < n1; i++) {
        C[i] = A[i];
    }
    for (j = 0; j < n2; j++) {
        C[i + j] = B[j];
    }

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
