#include<stdio.h>
main()
{
int n,fact=1,i;
printf("enter the number=");
scanf("%d",&n);
if(n<0)
printf("negative.\n");
else
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d\n",fact);
}

