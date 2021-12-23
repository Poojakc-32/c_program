#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


void dosomeWork(char *name)
{
    const int NUM = 2;
    for(int i=0 ; i<NUM ; i++)
    {
        sleep(rand() %4);
        printf("done pass %d for %s\n",i, name);
    }
}

int main(int argc, char *argv[])
{
	printf("I am: %d\n", (int) getpid());
	
	pid_t pid = fork();
	srand((int) pid);
	printf("fork return: %d\n", (int) pid);
	if(pid < 0)
	{
	    perror("fork failed");
	}
	if(pid == 0)
	{
	   	printf("I am child with pid: %d\n", (int) getpid());
        dosomeWork("child");
        printf("child exiting\n");
        exit(10);
	}
	else if(pid>0)
	{
	    	printf("I am the parent: %d\n", (int) getpid());
	        sleep(10);
	        //dosomeWork("parent");
	        int status = 0;
	    	pid_t childpid = wait(&status);
	    	printf("parent knows child: %d finished\n", (int) childpid);
            int childReturnvalue = WEXITSTATUS(status);
            printf(" Return value was %d\n", childReturnvalue);
	}

	return 0;
}
