//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum Day d;

    for(d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day %d: %d\n", d, d);
    }

    return 0;
}