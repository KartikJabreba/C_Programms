#include<stdio.h>
void main()
{
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum= a+b;
    printf("%d\n",sum);

    int c,d,mul;
    printf("Enter other two numbers\n");
    scanf("%d%d",&c,&d);
    mul=c*d;
    printf("%d\n",mul);

    int total;
    printf("here is result\n");
    total=sum+mul;
    printf("%d\n",total);
    printf("thank you\a");
}
