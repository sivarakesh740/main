#include<stdio.h>
main()
{
int i,n;
printf("n=");
scanf("%d",&n);
for(i=31;i>=0;i--)
{
printf("%d",n&1<<i);
//printf("%d",j);
//printf("\n");
}
}
