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
    printf("enter the position");
    scanf("%d",&z);
    deletenode(z);
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
void deletenode(int x)
{
    struct node *n2=head;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    while(x>0&&n2->next!=NULL)
    {
        if(x==1)
        {
            head=head->next;
        }
        else
        {
            x--;
            n2->next=n2->next->next;
        }
        n2=n2->next;
        x--;
    }
    
}
