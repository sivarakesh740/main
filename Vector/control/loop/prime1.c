#include<stdio.h>
main()
{
int n,i;
printf("enter the number=");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
break;
}
if(i==n)
printf(" prime..\n");
else
printf(" not prime..\n");
}


