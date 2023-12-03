#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL;
void main()
{
    int n,n1;
    int y;
    printf("enter the size of the list");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n1);
        add(n1);
    }
    printf("enter the valueto be searched");
    scanf("%d",&y);
    int z;
    printf("enter the node data");
    scanf("%d",&z);
    addafter(y,z);
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
void addafter(int x,int y)
{
    struct node *n2=head;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    while(n2->next!=NULL)
    {
        if(x==n2->data)
        {
              newnode->data=y;
              break;
        }
        n2=n2->next;
        
    }
    newnode->next=n2->next;
    n2->next=newnode;
}
