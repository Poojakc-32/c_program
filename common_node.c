#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
	{
		int data;
		struct node *next;
    };

int add(struct node **head, int val);
int countCommonNodes(struct node *head1, struct node *head2);
int printList(struct node *head);

int add(struct node **head, int val)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=*head;
    *head=new_node;
}

int countCommonNodes(struct node *head1, struct node *head2)
{
    struct node *current1 = head1;
    struct node *current2 = head2;
    int count = 0; 
   
    while (current1 != NULL)    // traverse list 1 till the end of list
	  {
         while (current2 != NULL)  // traverse list 2 till the end of list
			 {
 
				if (current1->data == current2->data)
					count++;
	 
				current2 = current2->next;
             }
         current1 = current1->next;
         current2 = head2;
      }
     return count;
}

int printList(struct node *head)
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
	int c=0;
    struct node *head1=NULL;
	struct node *head2=NULL;

    add(&head1, 1);
    add(&head1, 2);
    add(&head1, 3);
    printList(head1);

	add(&head2,1);
    add(&head2,5);
    add(&head2,3);
    printList(head2);

	c=countCommonNodes(head1,head2);
    printf("%d",c);
}