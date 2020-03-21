#include<stdio.h>
main()
{
int n,s=0;
printf("enter the number=");
scanf("%d",&n);
while(n)
{
s=s+n%10;
n=n/10;
}
printf("%d\n",s);
}
