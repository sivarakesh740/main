#include<stdio.h>
main()
{
int n,r,s=0,temp,i;
//printf("enter the number=");
//scanf("%d",&n);
//temp=n;
for(i=50;i<=500;i++)
{
temp=i;
n=i;
s=0;
while(n)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
printf("%d\n",i);
}
if(s==temp)
printf("armstrong\n");
else
printf("not an ARMSTROG\n");
}
