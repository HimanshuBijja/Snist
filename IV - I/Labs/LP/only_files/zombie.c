#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork(); // Create child process

    if (pid > 0) {
        // Parent process
        printf("Parent process PID: %d\n", getpid());
        printf("Child process PID: %d\n", pid);

        // Sleep so that the child becomes zombie
        sleep(5);  // Check the process table during this time
        printf("Parent woke up. Exiting now.\n");
    }
    else if (pid == 0) {
        // Child process
        printf("Child process running (PID: %d)\n", getpid());
        exit(0); // Child exits immediately
    }
    else {
        // fork failed
        printf("Fork failed.\n");
    }
    return 0;
}