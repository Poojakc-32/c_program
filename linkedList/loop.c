// detect a loop in a linked list
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

int add(struct node **head, int val);
int detectLoop(struct node* head);
int printList(struct node* head);

int add(struct node **head, int val)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=*head;
    *head=new_node;
}

int detectLoop(struct node* head)
{
	if(head == NULL || head->next == NULL)
	{
		return false;
	}
    struct node *slow = head, *fast = head->next;
    while (slow != fast) 
		{
			 if (fast==NULL || fast->next==NULL)     
				{   
				  return false;				  
				}	
			slow = slow->next;
			fast = fast->next->next;
        }
	 return true; 
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
	add(&head, 2);
	printList(head);
    head->next->next->next=head->next;
	
	if(detectLoop(head))
	{
      printf(" Loop is found ");
	}
	else
	{
		printf(" Loop is not found");
	}
}