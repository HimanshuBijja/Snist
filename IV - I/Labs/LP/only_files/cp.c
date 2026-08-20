// Copy File
#include <stdio.h>

int main() {
    char source[100], dest[100];

    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *src = fopen(source, "r");
    if (!src) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dst = fopen(dest, "w");
    if (!dst) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully from %s to %s\n", source, dest);
    return 0;
}
