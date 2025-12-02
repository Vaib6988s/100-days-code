//Find the sum of array elements.
#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
