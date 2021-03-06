#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

void my_function1 ( void *ptr);
void my_function2 ( void *ptr);

char buf[24];
sem_t mutex;

int main(int argc, char *argv[])
{
 pthread_t thread1;
 pthread_t thread2;
 
 char *msg1="thread1";
 char *msg2="thread2";
 
 sem_init(&mutex,0,1);
 
 pthread_create(&thread1, NULL, (void *) &my_function1, (void *) msg1);
 pthread_create(&thread2, NULL, (void *) &my_function2, (void *) msg2);
 
 pthread_join(thread1,NULL);
 pthread_join(thread2,NULL);
 
 sem_destroy(&mutex);
 
 return 0;
 }
 
 void my_function1 ( void *ptr)
 {
	 char *msg=(char *)ptr;
	 printf("%s\n", msg);
	 sem_wait(&mutex);
	 sprintf(buf, "%s", "Hello World");
	 sem_post(&mutex);
	 pthread_exit(0);
	 
 }
 
  void my_function2 ( void *ptr)
 {
	 char *msg=(char *)ptr;
	 printf("%s\n", msg);
	 sem_wait(&mutex);
	 printf("%s\n",buf);
         sem_post(&mutex);
	 pthread_exit(0);
 }
