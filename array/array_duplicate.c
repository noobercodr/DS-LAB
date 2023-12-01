#include <stdio.h>
int  main()
{
    int n;
    int i=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in sorted order");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
            a[i+1]=a[j];
            i++;
        }
    }
    printf("number of unique elemts is %d",(i+1));
    printf("final array is ");
    for(int j=0;j<i+1;j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}
