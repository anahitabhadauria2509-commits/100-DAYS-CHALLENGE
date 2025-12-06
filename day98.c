//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter details for Student 1 (roll name marks): ");
    scanf("%d %s %f", &s1.roll, s1.name, &s1.marks);

    printf("Enter details for Student 2 (roll name marks): ");
    scanf("%d %s %f", &s2.roll, s2.name, &s2.marks);

    if(s1.roll == s2.roll &&
       strcmp(s1.name, s2.name) == 0 &&
       s1.marks == s2.marks) {
        printf("Both structures are identical.\n");
    } else {
        printf("Structures are not identical.\n");
    }

    return 0;
}