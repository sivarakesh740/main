#include<stdio.h>
main()
{
int s=0,n;
printf("enter the number=");
scanf("%d",&n);
if(n==0)
s++;
while(n!=0)
{
n=n/10;
++s;
}
printf("sum=%d\n",s);
}
