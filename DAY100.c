//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf(" %[^\n]s", ptr->name);
    printf("Roll Number: ");
    scanf("%d", &ptr->roll_no);
    printf("Marks: ");
    scanf("%f", &ptr->marks);

    // Modify data using pointer
    printf("\nUpdating marks by adding 5...\n");
    ptr->marks += 5;

    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
