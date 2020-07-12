#include <stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter number to be factorised\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("neagtive have no factorial");

    }
    else{
    for(i=1;i<=n;++i)
    {
        fact=fact*i;
    }

    printf("factor of %d is %d",n,fact);
}
}
