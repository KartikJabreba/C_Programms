#include <stdio.h>
void main()
{
 int n1,n2,res,ch;
 printf("enter two numbers\n");
 scanf("%d%d",&n1,&n2);
 printf("press 1 for addition\n");
 printf("press 2 for subtraction\n");

 scanf("%d",&ch);
  switch(ch)
 {
 case 1:
    res=n1+n2;
    break;
 case 2:
    res=n1-n2;
    break;
 }
 printf("%d",res);
}
