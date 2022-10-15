#include<stdio.h>
#include<string.h>

int main()
{
    char pom[50];
    printf("Enter the string you wish to reverse:\n");
    scanf("%s", pom);
    printf("The reversed string is: %s", strrev(pom));
    return 0;
}