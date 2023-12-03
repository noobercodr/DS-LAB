#include<stdio.h>
#include <stdio.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
//struct node *tail=NULL;
void main()
{
    int n,e;
    printf("enter the size of the list");
    scanf("%d",&n);
    printf("enter the element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
        create(e);
    }
    printf("list is");
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}
void create(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->data=num;
    if(temp==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
