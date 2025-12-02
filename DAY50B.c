//Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char s[200];
    int i, j, k;

    scanf("%s", s);

    for(i = 0; s[i]; i++)
        for(j = i; s[j]; j++){
            for(k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
}