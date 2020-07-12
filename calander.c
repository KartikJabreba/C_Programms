/* To check weather year is a leap year or not*/
#include <stdio.h>
int main()
{
    int years;
    printf("To check weather year is a leap year or not\n\a");
    printf("\n");
    scanf("%d",&years);
    if(years%400==0)
        {printf("leap Year\a\n");
        }
    else
        if(years%4==0)
        {printf("Leap year\n\a");
        }
        else
        {printf("normal year\n");
        }
return 0;
}
