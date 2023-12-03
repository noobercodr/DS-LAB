#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;

void create(int num);
//void insertbeforenode(int num1);
void delete(int val)
{
    struct node *temp1=head;
    if(head->data==val)
    {
       head=temp1->next;
    }
    else
    {
        while(temp1!=NULL)
        {
            if(temp1->data==val)
            break;
            else
            temp1=temp1->next;
        }
        temp1->prev->next=temp1->next;
        temp1->next->prev=temp1;
    }
}
int  getsmall()
{
    struct node *temp2=head;
    int small=temp2->data;
    while(temp2->next!=NULL)
    {
        if(small>temp2->next->data)
        {
            small=temp2->next->data;
        }
        temp2=temp2->next;
    }
    return small;
}
int main()
{
    int n, e, n1;
    printf("enter the size of the list");
    scanf("%d", &n);
    printf("enter the element");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &e);
        create(e);
    }
    delete(getsmall());
    printf("list is: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    return 0;
}
void create(int num)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = num;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
