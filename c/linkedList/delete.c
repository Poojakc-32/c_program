#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

int add(struct node **head, int val);
void deleteNode(struct node* head);
int printList(struct node* head);

int add(struct node **head, int val)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=*head;
    *head=new_node;
}

void deleteNode(struct node* ptr)
{
    if (ptr->next == NULL)
    {
        free(ptr);
        return;
    }
    struct node* temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    free(temp);
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
    printList(head);
    deleteNode(head->next);
    printList(head);
}