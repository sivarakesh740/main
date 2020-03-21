#include<stdio.h>
main()
{
int i,n,sum=0;
printf("enter the number=");
scanf("%d",&n);
for(sum>0,i=31;i>=0;i--)
{
if(n>>i&1)
sum++;
}
printf("no of bit set=%d\n",sum);
printf("no of bit clear=%d\n",31-sum);
if(sum==1)
printf("power of 2.\n");
else
printf("not an power of 2\n");
} 

