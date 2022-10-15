#include <stdio.h>
void main()
{
    printf("Enter the no of rows and columns of the matrix");
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    printf("Enter the elements of the matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (a[i][j]==0)
            {
                for(int k=0;k<n;k++)
                {
                    b[i][k]=0;
                }
                for(int k=0;k<m;k++)
                {
                    b[k][j]=0;
                }
            }
        }
    }
    printf("The resultant matrix is:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(b[i][j]+"\t");
        }
        printf("\n");
    }    
}