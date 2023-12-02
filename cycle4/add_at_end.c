#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node *head=NULL;
void add(int num)
{
    struct Node *n=head;
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->data=num;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        while(n->next!=NULL)
        {
            n=n->next;
        }
        n->next=newnode;
    }
}
void inserte(int num1)
{
    struct Node *n1=head;
    struct Node *newnode=malloc(sizeof(struct Node*));
    newnode->data=num1;
    while(n1->next!=NULL)
    {
        n1=n1->next;
    }
    n1->next=newnode;
}
void main()
{
    int n;
    printf("enter the size of the list");
    scanf("%d",&n);
    printf("enter the elements");
    int n1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        add(n1);
    }
    int e;
    printf("enter the element to be inserted at the first");
    scanf("%d",&e);
    inserte(e);
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
