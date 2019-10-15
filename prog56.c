#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter your salary");
scanf("%d",&a);
if(a>250000 && a<500000)
{
b=a-250000;
c=b*5/100;
printf("your income is %d",c);
}
else if(a>500000)
{
b=a-500000;
c=b*20/100;
printf("your income is %d",c);
}
else
{
printf("your income is below 250000");
}
return 0;
}

