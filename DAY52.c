//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n, x;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements (space separated): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number x to find its ceil: ");
    scanf("%d", &x);

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;  // first occurrence of ceil
        }
    }

    if(index != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    else
        printf("Ceil of %d does not exist. Output: -1\n", x);

    return 0;
}
