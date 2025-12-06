//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input.txt\n");
        return 0;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error creating output.txt\n");
        fclose(inFile);
        return 0;
    }

    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion completed. Check output.txt\n");
    return 0;
}