#include <stdio.h>
int main()
{
    //printf("enter the matrix\n");
    int r, c;
    printf("enter the no of rows and cols\n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    int count=1;
    printf("enter the elements\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("tuple representation\n");
    int t[100][3];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                 t[count][0]=i;
                 t[count][1]=j;
                 t[count][2]=a[i][j];
                 count++;
            }
            
        }
    }
    t[0][0]=r;
    t[0][1]=c;
    t[0][2]=count-1;
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    printf("transporse of the matrix is\n");
    int tr[100][3];
    for(int i=1;i<count;i++)
    {
            for(int j=0;j<3;j++)
            {
                tr[i][0]=t[i][1];
                tr[i][1]=t[i][0];
                tr[i][2]=t[i][2];
            }
        }
        
    tr[0][0]=c;
    tr[0][1]=r;
    tr[0][2]=count-1;
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",tr[i][j]);
        }
        printf("\n");
    }
       return 0;
}
