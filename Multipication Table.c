#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter numeral required to get\n");
    scanf("%d",&a);
    for(b=1;b<=10;++b) {
        printf("%d multiplies %d equals %d\n",a,b,a*b);

    }
}
