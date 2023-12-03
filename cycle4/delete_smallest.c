#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL;
int count;
void main()
{
    int n,n1;
    int z;
    printf("enter the size of the list");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n1);
        add(n1);
    }
    printf("adter deletion");
    deletenode();
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}
void add(int num)
{
    struct node *n1=head;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        while(n1->next!=NULL)
        {
            n1=n1->next;
        }
        n1->next=newnode;
    }
}
void deletenode()
{
    struct node *n2=head;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int n3=head->next->data;
    struct node *n4=head;
    while(n2!=NULL)
    {
        if(n2->data<n3)
        {
            n3=n2->data;
        }
        n2=n2->next;
    }
    while(n4->next!=NULL)
    {
        if(n3==n4->data)
        {
            head=head->next;
        }
        else if(n3==n4->next->data)
        {
            n4->next=n4->next->next;
        }
        n4=n4->next;
    }
}
