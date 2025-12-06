//Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joinDate;
};

int main() {
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%d\n",
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}