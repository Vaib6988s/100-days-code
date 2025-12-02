//Change the date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>

int main() {
    char d[3], m[3], y[5];
    scanf("%2s/%2s/%4s", d, m, y);

    char *mon[] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };

    int mi = (m[0]-'0')*10 + (m[1]-'0');
    printf("%s-%s-%s", d, mon[mi-1], y);
}