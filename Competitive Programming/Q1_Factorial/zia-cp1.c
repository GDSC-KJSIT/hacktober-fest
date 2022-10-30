#include<stdio.h>
int fact(int);
int main()
    {
        int x,num;

        printf(" Enter the number :");
        scanf("%d",&num);
    
        x=fact(num);
        printf(" Factorial of %d is %d",num,x);
    
        return 0;
    }

int fact(int num)
    {
        if(num==0)
            return(1);
        else
        return(num*fact(num-1));
    }