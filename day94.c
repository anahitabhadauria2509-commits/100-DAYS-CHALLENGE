//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    printStudent(s1);

    return 0;
}