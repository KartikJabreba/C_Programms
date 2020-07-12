#include <stdio.h>
void main()
{
    int a,b,c,p,q,area,sum;
    printf("AREA OF THE TRIANGLE\n");
    printf("BY HERON's FORMULA\n");
    printf("Enter sides\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=(a+b+c)/2;
    printf("Semi Peremeter=");
    printf("%d\n\a",sum);
    area=sum*(sum-a)*(sum-b)*(sum-c);
    printf("Area of the triangle=");
    printf("%d\a\n",area);
    printf("By Kartik Jabreba");

}
