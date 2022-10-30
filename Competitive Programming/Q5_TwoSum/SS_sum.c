#include <stdio.h>

int getPairsCount(int arr[], int n, int sum)
{
	int count = 0;

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				count++;

	return count;
}

int main()
{
	int arr[20],i,n,sum;
	printf("enter no. of elements");
	scanf("%d",&n);
    printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	printf("enter sum: ");
	scanf("%d",&sum);
	printf("Count of pairs is %d",
		getPairsCount(arr, n, sum));
	return 0;
}