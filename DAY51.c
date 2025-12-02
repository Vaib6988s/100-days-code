//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted elements (space separated): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;  
            last = i;
        }
    }

    if(first != -1) {
        printf("First occurrence of %d is at index %d\n", target, first);
        printf("Last occurrence of %d is at index %d\n", target, last);
    } else {
        printf("Target %d not found in the array. Output: -1 -1\n", target);
    }

    return 0;
}
