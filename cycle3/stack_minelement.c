#include <stdio.h>
#include <stdlib.h>
int top=-1;
int top1=-1;
int st[100];
int st1[100];
void push(int x)
{
    top++;
    st[top]=x;
}
void push1(int x)
{
    top1++;
    st1[top1]=x;
}
int pop()
{
    top--;
    return st[top + 1];
}

int pop1()
{
    top1--;
    return st1[top1 + 1];
}
int get_min()
{
    return st1[top1];
}
int main()
{
    int item,ch;
    do
    {
        printf("1)push\n2)pop\n3)get min\n 5)exit\n");
        printf("enter ur choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("enter the data to be pushed\n");
                    scanf("%d", &item);
                    push(item);
                    if (top1 == -1 || item < get_min())
                    {
                        push1(item);
                    }
                    else
                    {
                        push1(get_min());
                    }
                    break;

            break;
            case 2:
            item=pop();
            printf("\nitem poped is %d",item);
            pop1();
            //top--;
            //top1--;
            break;
            case 3:
            printf("minimum element is %d",get_min());
            break;
            case 5:
                exit(0);
        }
    }while(1);
    return 0;
}
