#include<stdio.h>
int maximum(int a, int b)
{
    return (a > b)? a : b;
}
void main(){
    int n, sum=0, max=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
    scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i]<0)
        {
            max = maximum(sum, max);
            sum = 0;
        }
        else
        {
            sum+=a[i];
        }
    }
    max = maximum(sum, max);
    printf("The max sum is %d", max);

}