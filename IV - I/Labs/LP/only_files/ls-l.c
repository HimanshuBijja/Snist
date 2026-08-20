#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>

void print_permissions(mode_t mode) {
    printf( (S_ISDIR(mode)) ? "d" : "-");
    printf( (mode & S_IRUSR) ? "r" : "-");
    printf( (mode & S_IWUSR) ? "w" : "-");
    printf( (mode & S_IXUSR) ? "x" : "-");
    printf( (mode & S_IRGRP) ? "r" : "-");
    printf( (mode & S_IWGRP) ? "w" : "-");
    printf( (mode & S_IXGRP) ? "x" : "-");
    printf( (mode & S_IROTH) ? "r" : "-");
    printf( (mode & S_IWOTH) ? "w" : "-");
    printf( (mode & S_IXOTH) ? "x" : "-");
}

int main() {
    DIR *d;
    struct dirent *entry;
    struct stat fileStat;

    d = opendir(".");
    if (d == NULL) {
        printf("Could not open directory.\n");
        return 1;
    }

    while ((entry = readdir(d)) != NULL) {
        if (stat(entry->d_name, &fileStat) == 0) {
            print_permissions(fileStat.st_mode);
            printf(" %5ld %s\n", fileStat.st_size, entry->d_name);
        }
    }

    closedir(d);
    return 0;
}
