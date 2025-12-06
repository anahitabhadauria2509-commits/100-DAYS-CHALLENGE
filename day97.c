//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[3], temp;
    FILE *file;

    for(int i = 0; i < 3; i++) {
        printf("Enter ID, Name, Salary for Employee %d: ", i + 1);
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    file = fopen("employee.dat", "wb");
    if(file == NULL) {
        printf("File error\n");
        return 1;
    }

    fwrite(e, sizeof(struct Employee), 3, file);
    fclose(file);

    file = fopen("employee.dat", "rb");
    if(file == NULL) {
        printf("File error\n");
        return 1;
    }

    printf("\nEmployee Records:\n");
    for(int i = 0; i < 3; i++) {
        fread(&temp, sizeof(struct Employee), 1, file);
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               temp.id, temp.name, temp.salary);
    }

    fclose(file);

    return 0;
}