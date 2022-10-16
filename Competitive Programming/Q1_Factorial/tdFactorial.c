#include<stdio.h>
#include<stdlib.h>

long factorial (int num)
{
	if(num==0){
		return 1;
	}
	else{
		return (num*factorial(num-1));
	}
}

void main()
{
	int user_input;
	long  ans;
	printf("Enter a number to find its factorial:  ");
	scanf("%d",&user_input);
	
	ans=factorial(user_input);
	printf("%ld",ans);
}