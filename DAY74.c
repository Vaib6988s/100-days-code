//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char source[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dst = fopen(dest, "w");
    if (dst == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("Content successfully copied from %s to %s\n", source, dest);

    return 0;
}
