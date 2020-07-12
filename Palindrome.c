#include <stdio.h>
void main()
{
    int n,rev=0,rem,org;
    printf("Enter Number\n");
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n /= 10;
    }
    if(rev==org)
        printf("Palindrome");
    else
        printf("Not Palindrome");


}
