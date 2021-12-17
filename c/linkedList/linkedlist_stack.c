#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
 
struct Node* top = NULL;
int isEmpty(struct Node* top);
int isFull(struct Node* top);
struct Node* push(struct Node **top, int value);
int pop(struct Node* p);
void disply();


int isEmpty(struct Node* top)
{
    if (top==NULL)
        return 1;
    else
        return 0;
}
 
int isFull(struct Node* top)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL)
	{
        return 1;
    }
    else
	{
        return 0;
    }
}
 
struct Node* push(struct Node **top, int value)
{
    if(isFull(*top))
	{
        printf("Stack Overflow\n");
    }
    else
	{
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->data = value;
        new_node->next = *top;
        *top = new_node;
        return *top;
    }
}
 
int pop(struct Node* ptr)
{
    if(isEmpty(ptr))
	{
        printf("Stack Underflow\n");
    }
    else
	{
        struct Node* n = ptr;
        top = (ptr)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}
 
void display(struct Node* top)
{
    while (top != NULL)
    {
        printf("%d\n", top->data);
        top = top->next; 
    }
}
 
int main()
{
    push(&top,1);
    push(&top,2);
    push(&top,3);
	display(top);
    int element = pop(top); 
    printf("Popped element is %d\n", element);
    display(top);
    return 0;
}