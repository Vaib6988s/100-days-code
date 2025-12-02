//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

  
    for (int i = 0; str[i] != '\0'; i++) {
        int ascii = (int)str[i];
        if (ascii >= 97 && ascii <= 122) { 
            freq[ascii - 97]++; 
        }
    }

    char firstRepeat = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        int ascii = (int)str[i];
        if (ascii >= 97 && ascii <= 122 && freq[ascii - 97] > 1) {
            firstRepeat = str[i];
            break;
        }
    }

    if (firstRepeat != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
