#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node* next;
};
 
struct queue 
{
    struct node* stack1;
    struct node* stack2;
};
void push(struct node **top, int new_data);
int pop(struct node **top);
void enqueue(struct queue* q, int x);
int dequeue(struct queue* q);
 
void enqueue(struct queue* q, int value)
{
    push(&q->stack1, value);
}
 
int dequeue(struct queue* q)
{
    int x;
 
    if (q->stack1 == NULL && q->stack2 == NULL) 
	{
        printf("Q is empty");
    }
 
    if (q->stack2 == NULL) 
	{
        while (q->stack1 != NULL) 
		{
            x = pop(&q->stack1);
            push(&q->stack2, x);
        }
    }
 
    x = pop(&q->stack2);
    return x;
}
 
void push(struct node **top, int new_data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node)); 
	if (new_node == NULL) 
	{
        printf("Stack overflow \n");
        exit(0);
    }
    new_node->data = new_data;
    new_node->next = (*top);
    (*top) = new_node;
}
 
int pop(struct node **top)
{
    int res;
    struct node* temp;
 
    if (*top == NULL) 
	{
        printf("Stack underflow \n");
        exit(0);
    }
    else 
	{
        temp = *top;
        res = temp->data;
        *top = temp->next;
        free(temp);
        return res;
    }
}
 

int main()
{
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->stack1 = NULL;
    q->stack2 = NULL;
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));
 
    return 0;
}