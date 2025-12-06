//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student s[5];
    int n = 5;

    for(int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    file = fopen("students.txt", "w");
    if(file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if(file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    struct Student temp;
    while(fscanf(file, "%s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", temp.name, temp.roll, temp.marks);
    }
    fclose(file);

    return 0;
}