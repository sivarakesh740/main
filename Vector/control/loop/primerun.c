#include<stdio.h>
main()
{
int i,j; //r1,r2,i,j;
//printf("r1=");
//scanf("%d",&r1);
//printf("r2=");
//scanf("%d",&r2);
for(i=50;i>=60;i++)
{
for(j=2;j<i;j++)
if(i%j==0)
break;
}
if(i==j)
printf("i=%d\n",i);
}

