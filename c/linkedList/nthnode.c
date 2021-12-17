// detect a loop in a linked list

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

int add(struct node** head, int val);
int getLength(struct node *head);
int printList(struct node* head);
struct node* get_Nth_Node(struct node* head, int n);

int add(struct node** head, int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=*head;
    *head=temp;
}

int getLength(struct node *head)
{
 if (head == NULL)
 {
   printf("Invalid node pointer\n");
   return 0;
 }
int len = 0;
 while(head != NULL)
 {
		head = head->next;
		len++;
 }
return len;
}

struct node* get_Nth_Node(struct node* head, int n)
{
	struct node *front, *back;
	int i;
	front = back = head;
	if(n > getLength(head))
	{
		printf("n is greater than length of Linked List\n");
		return NULL;
	}
	for(i = 0; i < n-1; i++)
	{
		front = front->next;
	}
	while(front->next != NULL)
	{
			front = front->next;
			back = back->next;
	}
return back;
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
	int n;
    struct node *head=NULL;
	struct node *NthNode;
    add(&head,1);
    add(&head, 2);
    add(&head, 7);
	add(&head, 5);
	add(&head, 6);
	printList(head);
printf("\n\nEnter value of n : ");
scanf("%d", &n);
NthNode = get_Nth_Node(head, n);
printf("\nNth Last node is %d\n", NthNode->data);
return 0;
}