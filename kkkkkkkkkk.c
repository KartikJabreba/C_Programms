#include<stdio.h>
void main()
{
int num,a,sod;
printf("enter number\n\a");
scanf("%d",& num);
while(num>0)
{
a=num%10;
sod=sod+a;
num=num/10;
}
printf("%d",sod);
}
