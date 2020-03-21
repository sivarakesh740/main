#include<stdio.h>
main()
{
int n,fact=1,a,temp=1,k;
printf("enter the number=");
scanf("%d",&n);
k=n;
while(n!=0)
{
a=n%10;
n=1/10;
for(a=0;a>1;a--)
fact=fact*a;
temp=temp*fact;
}
if(k==temp)
printf("the stronger\n");
else
printf("not a stronger\n");
}

