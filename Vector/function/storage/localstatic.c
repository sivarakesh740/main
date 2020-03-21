#include<stdio.h>
/*int fun();
main()
{
int *p=fun();
printf("p=%u",(unsigned)p);
printf("*p=%d\n",*p);
}
int *fun()
{
auto int x=10;
static int x=10;
return x;
}*/

main()
{
static int x;
printf("x=%d",x);
}

