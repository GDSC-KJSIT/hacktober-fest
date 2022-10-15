#include<stdio.h>
#include<conio.h>
int main()
{
int i,k=0,x[10],y[10],c[25],j,n,n1,d[25],f=0;
printf("\n how many elements in SET 1: ");
scanf("%d",&n);
printf("\n please enter the elements : " );
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n how many elements in set 2: ");
scanf("%d",&n1);
printf("\n please enter elements : ");
for(i=0;i<n1;i++)
{
scanf("%d",&y[i]);
}
for(j=0;j<n;j++)
{
for(i=0;i<n1;i++)
{
if(y[i]==x[j])
break;
}
if(i!=n1)
{
d[f]=y[i];
f++;
}
}
printf("\n The Intersection of set is A and B is : ");
for(i=0;i<f;i++)
printf("%d \t ",d[i]);
getch();
}
