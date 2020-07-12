#include<stdio.h>
void main()
{
    int i,j,sum=0;
    printf("Enter the value");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("this number %d %d\n",i,j);
        }
    }
}
