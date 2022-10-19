#include<stdio.h>

int fact(int n);

void main()
{
 int n;
 printf("Enter which number's factorial you wish to find:\n");
 scanf("%d", &n);
 printf("The factorial of %d = %d", n, fact(n));
}

int fact(int n)
{
    if(n > 1)
    {
    return n * fact(n - 1);
    }
    else
    {
    return 1;
    }
}