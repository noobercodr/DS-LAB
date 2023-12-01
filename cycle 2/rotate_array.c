#include <stdio.h>
int left_rotate(int b[100],int n)
{
    int n1;
    printf ("enter the no of times u want to rotate");
    scanf("%d",&n1);
    int temp;
    for(int j=0;j<n1;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
        }
    }
    printf("rotated array is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
}
int right_rotate(int c[100],int n)
{
    int n1;
    printf ("enter the no of times u want to rotate");
    scanf("%d",&n1);
    int temp;
    for(int j=0;j<n1;j++)
    {
        for(int i=n-1;i>0;i--)
        {
            temp=c[i];
            c[i]=c[i-1];
            c[i-1]=temp;
        }
    }
    printf("rotated array is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }

}
int main()
{
    char c;
    int n;
    printf("enter whether u want to rotate to right or left");
    scanf(" %c",&c);
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(c=='l')
    left_rotate(a,n);
    else if(c=='r')
    right_rotate(a,n);
    return 0;
    
}
