#include<stdio.h>
#define d "%d"
int maximum(int x, int y)
{
    if(x>y)
    return x; 
    else 
    return y;
}
void main(){
    int n, sum=0, max=0;
    printf("Enter the size of the Array: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements now: \n");
    for(int i = 0; i < n; i++)
    {
    scanf(d, &array[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(array[i]<0)
        {
            max = maximum(sum, max);
            sum = 0;
        }
        else
        {
            sum+=array[i];
        }
    }
    max = maximum(sum, max);
    printf("Maximum sum: %d", max);

}