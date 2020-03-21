#include<stdio.h>
/*void fun();
main()
{
int n;
printf("enter the n values\n");
scanf("%d",&n);
fun(n);
}
void fun()
{
printf("fun function\n");
fun();
}*/


/*void fun(int);
main()
{
int n;
scanf("%d",&n);
fun(n);
}
void fun(int n)
{
printf("fun function\n");
if(n>0)
{
n--;
fun(n);
}
}*/

/*void fun(int);
main()
{
int n;
scanf("%d",&n);
fun(n);
}
void fun(int n)
{
printf("fun function\n");
if(n>0)
fun(n--);
}*/

/*main()
{
int n;
scanf("%d",&n);
fun(n);
}
void fun(int n)
{
printf("fun function\n");
if(n>0)
{
fun(--n);
}
}*/

/*void fun(int);
main()
{
fun(3);
}
void fun(int n)
{
if(n>0)
{
printf("%d ",n);
fun(--n);
}
}*/


void fun(int);
main()
{
fun(3);
}
void fun(int n)
{
if(n>0)
{
fun(--n);
printf("%d ",n);
fun(--n);
}
}

