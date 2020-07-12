#include <stdio.h>
void main()
{
    int sd;
    printf("Enter the speed\n");
    scanf("%d",&sd);
    if(sd<20)
        {
            printf("low\n\a");
        }
    else
        if(sd>=20&&sd<40)
        {
            printf("medium\n\a");
        }
    else
        if(sd>=40 && sd<60)
    {
        printf("high");
    }
    else
        if(sd>=60)
    {
        printf("veri high");
}
}
