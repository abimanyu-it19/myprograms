#include <stdio.h>
int main()
{
 int a[100],n,i,j;
 printf("enter how many numbers you are entering: ");
 scanf("%d",&n);
 printf("enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 for ( i = 0; i < n; i++)
{
 for ( j = 0; j < n; j++)
{
 if (a[j] > a[i])
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
	}
	}
	}
printf("Ascending order is: ");
for (int i = 0; i < n; i++)
{
printf(" %d ", a[i]);
}
	return 0;
}
