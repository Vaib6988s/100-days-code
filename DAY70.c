//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);  

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (i == 0 && isalpha(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
