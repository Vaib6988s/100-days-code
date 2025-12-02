//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[100];
    int emp_id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Write to binary file
    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(employees, sizeof(struct Employee), n, fp);
    fclose(fp);
    printf("\nEmployee data saved to employees.dat\n");

    struct Employee readEmp;
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nEmployee Details from file:\n");
    while (fread(&readEmp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s, Employee ID: %d, Salary: %.2f\n", readEmp.name, readEmp.emp_id, readEmp.salary);
    }

    fclose(fp);
    return 0;
}
