// Count of Characters, Words and Lines
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    int ch, lines = 0, words = 0, chars = 0, in_word = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    fclose(fp);
    printf("Lines: %d  Words: %d  Characters: %d\n", lines, words, chars);
    return 0;
}