#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

int add(struct node** head, int val);
void printMiddle(struct node *head);
int printList(struct node* head);


int add(struct node** head, int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=*head;
    *head=temp;
}

void printMiddle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
 
    if (head!=NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        printf("The middle element is [%d]\n", slow->data);
    }
}
  
int printList(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}

int main()
{
    struct node *head=NULL;
    add(&head,1);
    add(&head, 2);
    add(&head, 7);
	add(&head, 5);
	add(&head, 6);
    printMiddle(head);
}