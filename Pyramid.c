#include<stdio.h>
void main()
{
    int i,row,space,k=0;
    printf("Enter the number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;++i,k=0)
    {
        for(space=1;space<=row-i;++space)
        {
            printf(" ");
        }
        while(k != 2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
}
