#include <math.h>
#include <stdio.h>
void main()
{
    int n;
    printf("enter the degree of the 1st polynnomial");
    scanf("%d",&n);
    int poly1[n];
    for(int i=0;i<=n;i++)
    {
        printf("enter the coefficent of x^%d\n",i);
        {
            scanf("%d",&poly1[i]);
        }
    }
    int value;
    int sum=0;
    printf("enter the value");
    scanf("%d",&value);
    for(int i=0;i<=n;i++)
    {
        sum=sum+pow(value,i)*poly1[i];
    }
    printf("value is %d",sum);
}
