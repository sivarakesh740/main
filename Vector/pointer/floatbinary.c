#include<stdio.h>
main()
{
int i;
float x=7.5;
int *ip;
ip=&x;
for(i=31;i>=0;i--)
{
 printf("%d",*ip>>i&1);
}
}

