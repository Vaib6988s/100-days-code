//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE = 0,
    TIMEOUT = 5
};

int main() {
    enum Status s;

    printf("Enum values:\n");
    for (s = SUCCESS; s <= TIMEOUT; s++) {
        if (s == SUCCESS) printf("SUCCESS = %d\n", s);
        else if (s == FAILURE) printf("FAILURE = %d\n", s);
        else if (s == TIMEOUT) printf("TIMEOUT = %d\n", s);
    }

    return 0;
}
