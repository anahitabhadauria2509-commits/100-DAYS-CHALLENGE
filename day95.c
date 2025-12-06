//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct Student s[5], top;

    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = getTopStudent(s, 5);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}