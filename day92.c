//Store details of 5 students in an array of structures and print all
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}