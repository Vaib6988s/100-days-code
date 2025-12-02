//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int arr[100], n, i, searchValue, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchValue);


    for (i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            found = 1;
            break;      
    }
}


    if (found == 1) {
        printf("Element %d found at position %d.\n", searchValue, i + 1);
    } else {
        printf("Element %d not found in the array.\n", searchValue);
    }

    return 0;
}
