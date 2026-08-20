#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
    int fd;
    struct flock lock;
    char buffer[100];

    // Open file (create if not exists)
    fd = open("records.txt", O_RDWR | O_CREAT, 0666);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    printf("Enter data to write into the record: ");
    fgets(buffer, sizeof(buffer), stdin);

    // -------------------------------
    // Set record lock for bytes 0–49
    // -------------------------------
    lock.l_type = F_WRLCK;   // Write lock
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;        // Starting byte
    lock.l_len = 50;         // Length of the record

    printf("Trying to lock record (0–49)...\n");

    // F_SETLKW → wait if lock is already held by another process
    if (fcntl(fd, F_SETLKW, &lock) == -1) {
        perror("fcntl - lock");
        return 1;
    }

    printf("Record locked! Writing...\n");

    // Write to the locked region
    lseek(fd, 0, SEEK_SET);
    write(fd, buffer, strlen(buffer));

    printf("Press Enter to unlock and exit...");
    getchar();  // Wait so you can test with multiple processes

    // ---------
    // Unlocking
    // ---------
    lock.l_type = F_UNLCK;

    if (fcntl(fd, F_SETLK, &lock) == -1) {
        perror("fcntl - unlock");
        return 1;
    }

    printf("Record unlocked.\n");

    close(fd);
    return 0;
}