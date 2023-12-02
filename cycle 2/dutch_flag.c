#include <stdio.h>
void main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    int temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            temp=a[mid];
            a[mid]=a[low];
            a[low]=temp;
            mid++;
            low++;
        }
        else if(a[mid]==1)
        mid++;
        else 
        {
            temp=a[high];
            a[high]=a[mid];
            a[mid]=temp;
            high--;
        }
        
    }
    printf("sorted array is");
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
}
