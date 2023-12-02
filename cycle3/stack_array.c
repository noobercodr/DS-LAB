#include <stdio.h>
#include <stdlib.h>
int stack[100];
int top=-1;
void push(int a)
{
    if(top==99)
    {
        printf("stack overflow");
    }
    else {
        top++;
        stack[top]=a;
    }
}
int  pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else 
    {
        return stack[top];
        top--;
    }
}
int peek()
{
    
    if(top==-1)
    {
        printf("stack underflow");
    }
    else 
    {
        return stack[top];
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    for(int i=0;i<top;i++)
    {
        printf("\n%d ",stack[i]);
    }
}
int main()
{
    int item,ch;
    do
    {
        printf("1)push\n2)pop\n3)peek\n4)display\n5)exit\n");
        printf("enter ur choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the data to be pushed\n");
            scanf("%d",&item);
            push(item);
            break;
            case 2:
            item=pop();
            printf("\nitem poped is %d",item);
            break;
            case 3:
             item = peek();
            printf("\nThe Top element is %d", item);
            break;
            case 4:
                display();
                break;
                case 5:
                exit(0);
        }
        
    }while(1);
    return 0;
}
