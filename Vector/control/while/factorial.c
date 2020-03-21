#include<stdio.h>
main()
{
int n,fact=1;
printf("enter the number=");
scanf("%d",&n);
while(n)
{
fact=fact*n;
n--;
}
printf("fact=%d\n",fact);
}
