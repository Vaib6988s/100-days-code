//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Colors color;
    const char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    int totalColors = sizeof(colorNames) / sizeof(colorNames[0]);

    printf("Enum names and their integer values:\n");
    for (color = RED; color <= YELLOW; color++) {
        printf("%s = %d\n", colorNames[color], color);
    }

    return 0;
}
