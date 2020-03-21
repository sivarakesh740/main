#include<stdio.h>
main()
{
int n,s,r,i;
printf("enter the number=");
scanf("%d",&n);
for(i=1;i<n;i++)
{
//if(n%i==0)
r=n%i;
if(r==0)
s=s+i;
}
if(s==n)
printf("perfect\n");
else
printf("not a perfect\n");
}
