//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int i = 0;

    while (i < len) {
        if (i == 0 && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
        if (name[i] == ' ' && name[i+1] != '\0') {
            int j = i + 1;

            int isLast = 1;
            for (int k = j; k < len; k++) {
                if (name[k] == ' ') {
                    isLast = 0;
                    break;
                }
            }
            if (!isLast) {
                printf("%c.", toupper(name[j]));
            } else {
      
                printf(" ");
                for (int k = j; k < len; k++) {
                    printf("%c", name[k]);
                }
                break;
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
