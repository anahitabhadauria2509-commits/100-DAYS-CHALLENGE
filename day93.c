//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int maxIndex = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(int i = 1; i < 5; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}