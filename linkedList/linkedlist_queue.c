#include <stdio.h>
#include <stdlib.h>
 
struct node 
{
    int data;
    struct node *next;
};

struct node *front = NULL , *rear = NULL; 

int get_queue_size() 
{
    struct node *temp = front;
    int count = 0;   
    if(front == NULL && rear == NULL)
        return 0;
    while(temp != rear)
	{
        count++;
        temp = temp->next;
    }
    if(temp == rear)
        count++;        
    return count;
}
 
int get_Front_Element() 
{
    return front->data;
}
 
int get_rear_Element() 
{
    return rear->data;
}
 
void isEmpty() 
{
    if (front == NULL && rear == NULL)
        printf("Empty Queue\n");
    else
        printf("Queue is not Empty\n");
}

void enqueue(int value)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
	temp->next = NULL;
	if (rear == NULL)
	{
      front = rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
}
 
void dequeue()
{
   struct node *temp; 
   if (front == NULL) 
	{
        printf("\nQueue is Empty \n");
        return;
	}
	else 
	{
        temp = front;
        front = front->next;
        if(front == NULL)
		{
            rear = NULL;
        }
        printf("Removed Element : %d\n", temp->data);
        free(temp);
    }
}

void print_queue() 
{
    struct node *temp = front;
    isEmpty(); 
    while (temp != NULL) 
	{
        printf("%d\n", temp->data);
        temp = temp->next;
    }

}
 
int main()
{   
    enqueue(10);
    enqueue(20);
    enqueue(70);
    enqueue(20);
    enqueue(40);
    enqueue(30);
	print_queue();
    printf("\nSize of Queue : %d\n", get_queue_size());
    printf("Front Element : %d\n", get_Front_Element());
    printf("Rear Element : %d\n", get_rear_Element());   
	dequeue();
	print_queue();
	return 0;
}