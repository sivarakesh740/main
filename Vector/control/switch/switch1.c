#include<stdio.h>
main()
{
int a,b,res;
char op;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("***********\n");
printf("+:add -:sub *:mul /:div\n");
printf("enter the choice\n");
scanf(" %c",&op);
switch(op)
{
case'+':
res=a+b;
printf("add=%d\n",res);
break;

case'-':
res=a-b;
printf("sub=%d\n",res);
break;

case'*':
res=a*b;
printf("mul=%d\n",res);
break;

case'/':
res=a/b;
printf("div=%d\n",res);
break;

default:printf("invalid\n");
}
printf("bye\n");
}






