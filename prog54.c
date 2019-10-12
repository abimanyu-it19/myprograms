#include<stdio.h>
int main()
{
int a;
float b,c;
printf("enter the units");
scanf("%d",&a);
if(a<=50)
{
b=a*0.50;
}
else if(a>50 && a<=150)
{
b=25+((a-50)*0.50);
}
else if(a>150 && a<=250)
{
b=100+((a-100)*1.20);
}
else
{
b=220+((a-200)*1.50);
}
c=(20.0/100)*b+b;
printf(".......your electricity bill for this month is %f......",c);
return 0;
}

