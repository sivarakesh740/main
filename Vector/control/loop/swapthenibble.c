#include<stdio.h>
main()
{
char n,i,j,t1,t2;
printf("enter the value=");
scanf("%c",&n);
printf("*******\n");
printf("before swap....\n");
for(i=7;i>=0;i--)
printf("%d",n>>i&i);
for(i=0,j=4;i<4;i++,j++)
{
t1=n>>i&1;
t2=n>>j&1;
if(t1!=t2)
{
n=n^(1<<i);
n=n^(1<<j);
}
}
printf("after swap..\n");
for(i=4;i>=0;i--)
printf("%d",n>>i&1);
}
//printf("%c",n>>i&1);
//printf("after the swap..\n");
//for(i=7;i>=0;i--)
//printf("%d",n>>i&1);
//}

