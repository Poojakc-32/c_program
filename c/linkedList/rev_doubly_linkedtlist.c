#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
	struct node *prev;
};

int add(struct node** head, int val);
int reverseList(struct node** head);
int printList(struct node* head);

int add(struct node** head, int val)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
	new_node->prev=NULL;
    new_node->next=*head;
	if((*head)!= NULL)
	{
		(*head)->prev=new_node;
	}
    *head=new_node;
}

int reverseList(struct node** head)
{
    struct node *curr=*head, *temp=NULL;
    
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
	if(temp != NULL )
    (*head)=temp->prev;
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
    add(&head, 3);
	add(&head, 5);
    printList(head);
    reverseList(&head);
    printList(head);
}