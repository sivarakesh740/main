#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
int x=10,y=30,z,op;
printf("enter the 1)add 2)sub 3)mul 4)div\n");
scanf("%d",&op);
int(*fp[4])(int,int)={add,sub,mul,div};
if ((op>=1)&&(op<=4))
{
z=fp[op-1](x,y);
printf("z=%d\n",z);
}
else
printf("invalid option is enterer\n");
}
int add(int a,int b)
{
printf("add function\n");
return a+b;
}
int sub(int a,int b)
{
printf("sub function\n");
return a-b;
}

int mul(int a,int b)
{
printf("mul function\n");
return a*b;
}
int div(int a,int b)
{
printf("div function\n");
return a/b;
}
