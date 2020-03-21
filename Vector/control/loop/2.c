#include<stdio.h>
main()
{
int x=0,y=1,z;
int n,n1;
printf("enter the starting range");
scanf("%d",&n);
printf("enter the ending range");
scanf("%d",&n1);
if(n==0)
return;
else if(n==1)
{
printf("%d",x);
return;
}
else
printf("%d %d",x,y);
while(--n>1)
{
z=x+y;
if(z>=n1&&z<=n)
printf("%d",z);
x=y;
y=z;
}
}
