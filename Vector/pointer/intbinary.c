#include<stdio.h>
main()
{
double x=7.5;
int i,j;
int *ip;
ip=&x;
ip=ip+1;
for(i=0;i<=1;i++)
{
for(j=31;j>=0;j--)
printf("%d",(*ip)>>j&1);
printf("\n");
ip=ip-1;

}
}
