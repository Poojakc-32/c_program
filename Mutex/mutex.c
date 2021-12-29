#include <stdio.h>
#include <pthread.h>

#define NUM_LOOPS 500000
long long sum=0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* counting_thread(void *arg)
{
     int offset = *(int *) arg;
	for(int i=0;i<NUM_LOOPS;i++)
	{
	//critical section starts
	pthread_mutex_lock(&mutex);
	
	sum +=offset;
	
	//criticl section Ends
	pthread_mutex_unlock(&mutex);
	}
	pthread_exit(NULL);
}

int main(void)
{
	pthread_t id1;
	int offset1 = 1;
	pthread_create(&id1, NULL , counting_thread , &offset1);
	
	pthread_t id2;
	//offset1=-1;
	int offset2 = -1;
	pthread_create(&id2, NULL , counting_thread , &offset2);
	//pthread_create(&id2, NULL , counting_thread , &offset1);
	
	
	pthread_join(id1 , NULL);
	pthread_join(id2 , NULL);
	//counting_thread(-1);
	printf("sum=%lld\n",sum);
	return 0;
}
