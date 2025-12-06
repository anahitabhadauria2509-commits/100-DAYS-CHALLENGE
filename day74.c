//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *srcFile, *destFile;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    srcFile = fopen(source, "r");
    if (srcFile == NULL) {
        printf("Error opening source file.\n");
        return 0;
    }

    destFile = fopen(dest, "w");
    if (destFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(srcFile);
        return 0;
    }

    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}