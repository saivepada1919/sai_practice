#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t pid;

    pid = fork();   // create new process

    if (pid == 0)
    {
        // CHILD PROCESS
	sleep(5);
        printf("I am CHILD\n");
        printf("Child PID  : %d\n", getpid());
        printf("Parent PID : %d\n", getppid());
    }
    else
    {
        // PARENT PROCESS
        printf("I am PARENT\n");
        printf("Parent PID : %d\n", getpid());
        printf("Shell PID  : %d\n", getppid());
    }

    return 0;
}

