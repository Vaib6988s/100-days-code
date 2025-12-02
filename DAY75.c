//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];

    printf("Enter filename to append to: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]s", text);  // read full line including spaces

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
