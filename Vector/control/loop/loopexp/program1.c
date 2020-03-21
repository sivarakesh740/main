#include<stdio.h>
main()
{
int n,r;
printf("enter the number=");
scanf("%d",&n);
while(n)
{
r=(n%2);
printf("%d\n",r);
break;
}
if(r==0)
printf("even\n");
else
printf("odd\n");
}
