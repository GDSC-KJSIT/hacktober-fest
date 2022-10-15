#include<stdio.h>

void main()
{
    int sum, n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum:\n");
    scanf("%d, &sum");

    for(int i = 0; i < n-1; i++)
    {
        int b = sum-arr[i];
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j]==b)
            {
                printf("%d\t%d", arr[i], b);
            }
        }
    }

}