#include <stdio.h>
#include <ctype.h>
void main()
{
    char postfix[50];
    printf("enter the expression");
    gets(postfix);
    convert(postfix);
    
}
void convert(char a[])
{
    char stack[50][50];
    int top=-1;
    int value=0;
    for(int i=0;a[i]!='\0';i++)
    {
        char c=a[i];
        char temp[2]={c,'\0'};
        if(isalnum(a[i]))
        {
            strcpy(stack[++top],temp);
        }
        else if(c=='+'||c=='-'||c=='*'||c=="/")
        {
            char b[50], a[50];
            strcpy(b, stack[top--]);
            strcpy(a, stack[top--]);

           sprintf(stack[++top], "(%s%c%s)", a, c, b);
        }
    }
    printf("final expression is %s",stack[top]);
}
