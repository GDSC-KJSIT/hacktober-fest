#include<stdio.h>
int Number(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n,Number(n));
    return 0;
}

int Number(int n) {
    if (n>=1)
        return n*Number(n-1);
    else
        return 1;
}