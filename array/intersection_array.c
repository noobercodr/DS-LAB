#include <stdio.h>
int main()
{
    int n,n1;
    printf("enter thesize of 1st sorted array");
    scanf("%d",&n);
    int a[n];
    printf("enter the size of 2nd sorted array");
    scanf("%d",&n1);
    int b[n1];
    int c[n1+n];
    printf("enter the elements of the 1st array");
    for(int i =0;i<n;i++)   
    {
        scanf("%d",&a[i]);
        
    }
    printf("enter the elements of the 2nd array");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while(i<n&&j<n1)
    {
        if(a[i]<b[j])
        i++;
        else if(b[j]<a[i])
        j++;
        else
        {
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
    }
    printf("intersection is ");
    for(int i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
}
