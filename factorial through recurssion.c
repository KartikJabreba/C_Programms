#include <stdio.h>
void main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n>=50 && n<=100 )
    {
        printf("factorial of %d is %d", n, fact(n));
    }
    else
    {
        printf("invalid number");
    }
}
int fact(int n)
{
 if (n==0)
        return 1;
 return(n*fact(n-1));
}
