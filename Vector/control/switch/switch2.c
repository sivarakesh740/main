#include<stdio.h>
main()
{
int a,b,res,op;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("************\n");
printf("1.case 2.case 3.case 4.case\n");
//printf("'+':add '-':sub '*':mul '/':div\n");
printf("enter the choice\n");
scanf("%d",&op);
switch(op)
{
case 1:
res=a+b;
printf("res=%d\n",res);
//break;
case 2:
res=a-b;
printf("res=%d\n",res);
//break;
case 3:
res=a*b;
printf("res=%d\n",res);
//break;
case 4:
res=a/b;
printf("res=%d\n",res);
//break;
}
}
