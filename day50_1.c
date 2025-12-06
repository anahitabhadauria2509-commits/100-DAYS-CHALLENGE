//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    char date[11];
    int dd, mm, yyyy;

    char months[][12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);

    printf("Formatted Date: %02d-%s-%d\n", dd, months[mm - 1], yyyy);

    return 0;
}