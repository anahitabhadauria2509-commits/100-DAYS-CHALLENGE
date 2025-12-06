//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main() {
    enum Month m;
    int days;

    for(m = JANUARY; m <= DECEMBER; m++) {
        switch(m) {
            case JANUARY: days = 31; break;
            case FEBRUARY: days = 28; break;
            case MARCH: days = 31; break;
            case APRIL: days = 30; break;
            case MAY: days = 31; break;
            case JUNE: days = 30; break;
            case JULY: days = 31; break;
            case AUGUST: days = 31; break;
            case SEPTEMBER: days = 30; break;
            case OCTOBER: days = 31; break;
            case NOVEMBER: days = 30; break;
            case DECEMBER: days = 31; break;
        }
        printf("Month %d has %d days\n", m + 1, days);
    }

    return 0;
}
