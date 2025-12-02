//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
 {
    char str1[100], str2[100], temp[200];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("String is a rotation\n");
    else
        printf("Not a rotation\n");

    return 0;
}
