#include<stdio.h>
#include<string.h>
void fib(int );
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
fib(n);
printf("\n");
}
void fib(int n)
{
static int x=0,y=1,z;
if(x==0)
printf("%d  %d",x,y);
if(x+y<n)
{
z=x+y;
printf("%d ",z);
x=y;
y=z;
fib(n);
}
}
