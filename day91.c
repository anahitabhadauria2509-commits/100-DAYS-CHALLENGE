//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &p.gender);

    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);

    if(p.gender == MALE)
        printf("Gender: MALE\n");
    else if(p.gender == FEMALE)
        printf("Gender: FEMALE\n");
    else if(p.gender == OTHER)
        printf("Gender: OTHER\n");
    else
        printf("Gender: INVALID\n");

    return 0;
}