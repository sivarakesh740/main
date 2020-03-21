#include<stdio.h>
main()
{
int n,s,temp,r;
printf("enter the number=");
scanf("%d",&n);
temp=n;
while(n)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
if (s==temp)
printf("armstrong..\n");
else
printf("not an armstong...\n");
}
