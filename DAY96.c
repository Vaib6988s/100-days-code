//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    printf("Enter employee details:\n");

    printf("Name: ");
    scanf(" %[^\n]s", emp.name);

    printf("Employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}
