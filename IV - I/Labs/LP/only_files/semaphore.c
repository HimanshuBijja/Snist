#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <semaphore.h>
#include <sys/stat.h>

#define SEM_NAME "/simple_sem"
#define FILE_NAME "data.txt"

int main() {
    sem_t *sem;
    int fd;

    /* Create or open a named semaphore with initial value 1 */
    sem = sem_open(SEM_NAME, O_CREAT, 0666, 1);
    if (sem == SEM_FAILED) {
        perror("sem_open");
        exit(1);
    }

    /* Wait on semaphore (enter critical section) */
    sem_wait(sem);

    /* Open file */
    fd = open(FILE_NAME, O_WRONLY | O_CREAT | O_APPEND, 0666);
    if (fd == -1) {
        perror("open");
        sem_post(sem);
        exit(1);
    }

    /* Apply file lock */
    struct flock lock;
    lock.l_type = F_WRLCK;      // write lock
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;             // entire file

    fcntl(fd, F_SETLKW, &lock); // blocking lock

    /* Write data to file */
    write(fd, "Writing with semaphore + file lock\n", 36);

    /* Unlock file */
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock);

    close(fd);

    /* Release semaphore */
    sem_post(sem);

    printf("Write completed successfully.\n");

    /* Cleanup (optional) */
    sem_close(sem);
    // sem_unlink(SEM_NAME); // uncomment to delete semaphore

    return 0;
}
