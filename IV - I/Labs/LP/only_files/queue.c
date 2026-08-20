#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MAX 100

// Structure for message queue
struct msg_buffer {
    long msg_type;
    char msg_text[MAX];
};

int main() {
    struct msg_buffer msg;
    key_t key;
    int msgid;

    // a) Creating a message queue
    key = ftok("progfile", 65);  // generate unique key
    msgid = msgget(key, 0666 | IPC_CREAT);  // create message queue
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }
    printf("Message queue created successfully. ID = %d\n", msgid);

    // b) Writing to message queue
    msg.msg_type = 1;  // message type must be > 0
    strcpy(msg.msg_text, "Hello! This is a test message.");

    if (msgsnd(msgid, &msg, sizeof(msg.msg_text), 0) == -1) {
        perror("msgsnd");
        exit(1);
    }
    printf("Message sent: %s\n", msg.msg_text);

    // c) Reading from message queue
    if (msgrcv(msgid, &msg, sizeof(msg.msg_text), 1, 0) == -1) {
        perror("msgrcv");
        exit(1);
    }
    printf("Message received: %s\n", msg.msg_text);

    // Cleanup (optional)
    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}