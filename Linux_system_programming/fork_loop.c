#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	for(int i =1; i<=2; i++)
	{
		fork();
		printf("%d: My PID = %d\n", i, (int) getpid());
	}
	sleep(10);
	printf(" My PID = %d\n", (int) getpid());
	
	return 0;
}

