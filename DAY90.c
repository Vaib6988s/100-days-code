//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender { 
    MALE, 
    FEMALE, 
    OTHER 
};

struct Person {
    char name[100];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf(" %[^\n]s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    int g;
    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    scanf("%d", &g);
    p.gender = g;

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    switch(p.gender) {
        case MALE:   printf("Gender: Male\n"); break;
        case FEMALE: printf("Gender: Female\n"); break;
        case OTHER:  printf("Gender: Other\n"); break;
        default:     printf("Gender: Unknown\n");
    }

    return 0;
}
