#include<stdio.h>
main()
{
int x=0,y=1,z;
int n,n1;
printf("enter the n=");
scanf("%d",&n1);
printf("enter the n1=");
scanf("%d",&n);
if(n==0)
//return;
//else if (n==1)
//{
//printf("%d",x);
//return;
//}
//else
printf("%d %d",x,y);
while(--n>1)
//for(x;x<n,y<n;)
{
z=x+y;
if(z>=n1 && z<=n)
printf("%d\n",z);
x=y;
y=z;
}
}
