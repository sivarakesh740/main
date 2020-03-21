//01-09-2018

#include<stdio.h>
#include<stdarg.h>
void fun(int n,...);
 main()
{
fun(10,20,30,40,0);//0 for null termination
fun(11,22,33,44,55,66,77,0);
}
void fun(int n,...)
{
int i,ret;
va_list bp;
va_start(bp,n);
printf("%d ",n);
while(ret=va_arg(bp,int))
printf("%d ",ret);
printf("\n");
va_end(bp);
}

/*void fun(int n,...);
void main()
{
fun(4,10,20,30,40);//count method
fun(7,10,20,30,40,50,60,70);
fun(2,33,44);
}
void fun(int n,...)
{
int i,ret;
va_list ap;
va_start (ap,n);
for(i=0;i<n;i++)
printf("%d ",va_arg(ap,int));
printf("\n");
va_end(ap);
}*/
