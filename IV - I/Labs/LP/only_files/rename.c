#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s old_filename new_filename\n", argv[0]);
        exit(1);
    }

    if (rename(argv[1], argv[2]) == 0) {
        printf("File renamed from %s to %s successfully.\n", argv[1], argv[2]);
    } else {
        perror("rename");
        exit(1);
    }
    return 0;
}