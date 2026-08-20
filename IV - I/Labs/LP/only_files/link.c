#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s existing_file new_link_name\n", argv[0]);
        exit(1);
    }

    if (link(argv[1], argv[2]) == 0) {
        printf("Hard link created: %s -> %s\n", argv[2], argv[1]);
    } else {
        perror("link");
        exit(1);
    }
    return 0;
}