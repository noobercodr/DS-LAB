
#include <stdio.h>

void sum(int m1[100][3], int m2[100][3]) {
    int r = 0, c = 0;
    int m3[100][3];
    int k = 1;
    int i = 0, j = 0;
    r = m1[0][2];
    c = m2[0][2];
    while ((i < r) && (j < c)) 
    {
        if ((m1[i][0] == m2[j][0]) && (m1[i][1]== m2[j][1]))
        {
            m3[k][0] = m1[i][0];
            m3[k][1] = m1[i][1];
            m3[k][2] = m1[i][2] +m2[j][2];
            i++;
            j++;
            k++;
        }
        else if (m1[i][0] < m2[j][0]) 
        {
            m3[k][0] = m1[i][0];
            m3[k][1] = m1[i][1];
            m3[k][2] = m1[i][2];
            i++;
            k++;
        } else 
        {
            m3[k][0] = m2[j][0];
            m3[k][1] = m2[j][1];
            m3[k][2] = m2[j][2];
            j++;
            k++;
        }
    }
    while (i < r) 
    {
        m3[k][0] = m1[i][0];
        m3[k][1] = m1[i][1];
        m3[k][2] = m1[i][2];
        i++;
        k++;
    }
    while (j < c) 
    {
        m3[k][0] = m2[j][0];
        m3[k][1] = m2[j][1];
        m3[k][2] = m2[j][2];
        j++;
        k++;
    }
    m3[0][0] = m1[0][0];
    m3[0][1] = m1[0][1];
    m3[0][2] = k - 1;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("enter the no of non zero elemnts in matrix 1 and matrix 2\n");
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int t1[n1][3];
    int t2[n2][3];
    printf("enter the elemts of first matrix\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &t1[i][j]);
        }
    }
    printf("enter the elemts of second matrix\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &t2[i][j]);
        }
    }
    printf("final matrix is\n");
    sum(t1, t2);
    return 0;
}
