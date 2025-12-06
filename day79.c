//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    double average = (count > 0) ? (double)sum / count : 0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}