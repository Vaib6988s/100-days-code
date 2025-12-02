//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int arr[] = {4, 7, 2, 94, 7, 8};
    int n = 6;

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}
