//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    int input;
    printf("Enter user role (0 for ADMIN, 1 for USER, 2 for GUEST): ");
    scanf("%d", &input);

    enum UserRole role = input;

    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have guest access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
