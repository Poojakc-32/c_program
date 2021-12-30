#include "header.h"

void main()
{
	int p[2],ret;
	ret= pipe(p);
	if(ret<0)
	{
		perror("pipe");
		return ;
	}

	printf("p[0] = %d p[1] = %d\n",p[0],p[1]);
	if(fork() == 0)
	{
	//child
		while(1)
		{
		        sleep(1);
			char b[20];
			printf("Before reading in the child......\n");
			read(p[0],b,20);
			printf("After reading in child: %s\n",b);
		}
	}
	else
	{
	//perent
		while(1)
		{
		        sleep(2);
			char a[20]; 
			printf("Enter the data...\n");
			scanf("%s",a);
			write(p[1],a,strlen(a)+1);
		}
	}
}

