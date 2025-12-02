//Check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], revStr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(revStr, str);
    strrev(revStr);

    if (strcmp(str, revStr) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
