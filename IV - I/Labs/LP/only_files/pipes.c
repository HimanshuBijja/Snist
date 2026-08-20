#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];                 // fd[0] = read end, fd[1] = write end
    pid_t pid;
    char write_msg[] = "Hello from parent process!";
    char read_msg[100];

    // Create pipe
    if (pipe(fd) == -1) {
        perror("pipe");
        return 1;
    }

    pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        // -------- CHILD PROCESS --------
        close(fd[1]);  // Close write end

        read(fd[0], read_msg, sizeof(read_msg));
        printf("Child received: %s\n", read_msg);

        close(fd[0]);
    } else {
        // -------- PARENT PROCESS --------
        close(fd[0]);  // Close read end

        write(fd[1], write_msg, strlen(write_msg) + 1);
        close(fd[1]);
    }

    return 0;
}