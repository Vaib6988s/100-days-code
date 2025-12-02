//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (space separated): ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int total = 0;
    for(int i = 0; i < n; i++) total += arr[i];

    int leftsum = 0, pivot = -1;
    for(int i = 0; i < n; i++) {
        if(leftsum == total - leftsum - arr[i]) {
            pivot = i;
            break;
        }
        leftsum += arr[i];
    }

    if(pivot != -1)
        printf("Pivot index is %d\n", pivot);
    else
        printf("No pivot index found. Output: -1\n");

    return 0;
}
