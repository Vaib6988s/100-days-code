//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        } 
        else if (ch >= '0' && ch <= '9') { 
            digits++;
        } 
        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        
        }
        else {
            special++;
        }
    }


    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
