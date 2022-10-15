#include <stdio.h>
 #include<stdio.h>
void main()
 {
    int m, n;
    printf("Enter the size of the array(m*n):\n");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter the elements in the matrix:\n");
    //Initializing row[] and col[], where the elements of the array act as flags
    int row[m], col[n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
         printf("\n");
    }

    // Making the matrix elements zero
   for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(row[i]==1||col[j]==1)
            {
                a[i][j]=0;
            }
        }
    }
   

    printf("The new matrix is as follows:\n");
   for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
 }