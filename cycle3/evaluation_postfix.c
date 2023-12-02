#include <stdio.h>
#include <ctype.h>

void eval(char a[]);

int main()
{
    char postfix[50];
    printf("Enter the postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    eval(postfix);
    return 0;
}

void eval(char a[])
{
    int stack[50];
    int top = -1;
    

    for (int i = 0; a[i] != '\0'; i++)
    {
        char c = a[i];
        if (isdigit(a[i]))
        {
            stack[++top] = a[i] - '0';
        }
        else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
        {
            int b = stack[top--];
            int a = stack[top--];
            int value = 0;
            //char c = a[i];

            switch (c)
            {
            case '+':
                value = b + a;
                break;
            case '-':
                value = b - a;
                break;
            case '*':
                value = b * a;
                break;
            case '/':
                value = b / a;
                break;
            }

            stack[++top] = value;
        }
    }
    printf("Result of the expression is %d\n", stack[top]);
}
