#include <stdio.h>
void main()
 {
    int r, c;
    printf("Enter Rows and Columns of the array: \n");
    scanf("%d%d", &r, &c);
    int a[r][c];
    printf("Enter the elements: \n");
    int row[r], col[c];
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
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
   for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(row[i]==1||col[j]==1)
            {
                a[i][j]=0;
            }
        }
    }
   

    printf("New Matrix: \n");
   for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
 }