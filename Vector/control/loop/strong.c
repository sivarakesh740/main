#include<stdio.h>
main()
{
int n,fact=1,temp=0,r,s,i;
printf("enter the number\n");
scanf("%d",&n);
s=n;
while(n)
{
r=n%10;
fact=1;
for(i=r;i>=1;i--)
{
fact=fact*i;
}
temp=temp+fact;
n=n/10;
}
if(s==temp)
printf("strong\n");
else
printf("not strong\n");
}


