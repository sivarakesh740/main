#include<stdio.h>
main()
{
int n,r,s=0;
printf("enter the number=");
scanf("%d",&n);
while(n)
{
//s=s+n%10;
r=n%10;
s=s+r;
n=n/10;
}
printf("sum=%d\n",s);
}

