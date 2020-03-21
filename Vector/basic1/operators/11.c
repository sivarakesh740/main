#include<stdio.h>
main()
{
int a=3,b=4,c=1,d;
b=(a>b?(a>c?a:c):(b>c?b:c));
printf("%d",b);
}

