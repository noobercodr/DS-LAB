#include<stdio.h>
#include <stdio.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;
void main()
{
    int n,e,n1;
    printf("enter the size of the list");
    scanf("%d",&n);
    printf("enter the element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
        create(e);
    }
    printf("insert eleement at start");
    scanf("%d",&n1);
    inserte(n1);
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
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void inserte(int num1)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=num1;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
