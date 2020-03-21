#include<stdio.h>
main()
{
int n,s=0;
printf("enter the number=");
scanf("%d",&n);
while(n)
{
s=s*10+n%10;
n=n/10;
}
printf("sum=%d\n",s);
}

