#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum, n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int a[n], m;
    for(int i = 0; i < n; i++)
    {
        a[i]=NULL;
    }

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {   int j = 0, key;
        scanf("%d", &m);
        do{
        key = (abs(m) + j) % n;
            if(a[key] == NULL)
            {
            a[key] = m;
            break;
            }
            else
            {
                j++;
            }
        }while(a[key] != NULL);
    }

    printf("Enter the sum:\n");
    scanf("%d", &sum);
    int count=0;
    for(int i = 0; i < n; i++)
    {   int key, j = 0;
        do{
        int key = ( abs(sum - a[i]) + j) % n;
            if(a[key] == sum - a[i])
            {
            count++;
            break;
            }
            else
            {
                j++;
            }
        }while(a[key] != sum - a[i]);

    }
    printf("%d", count/2);

return 0;
}