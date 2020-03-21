#include<stdio.h>
/*main()
{
int i=0;
if(i<5)
{
printf("%d",i++);
main();
}
}*/

/*main()
{
static int i=0;
if(i<5)
{
printf("%d",i++);
main();
}
}*/

/*main()
{
static int i=0;
if(i++<5)
{
main();
printf("%d",i++);
}
}*/

/*main()
{
static int i;
i=5;
if(++i<5)
{
main();
printf("%d",i++);
}
}*/
/*void fun(const char *p);
main()
{
fun("ABCDEFG");
}
void fun(const char *p)
{
if(*p)
{
fun (p++);
printf("%c",*p);
}
printf("\n hello..\n");
}*/
/*void fun(const char *p);
main()
{
fun("ABCDEFG");
}
void fun(const char *p)
{
if(*p)
{
fun (++p);
printf("%c",*p);
}
printf("\n hello..\n");
}*/
void fun(const char *p);
main()
{
fun("ABCDEFG");
}
void fun(const char *p)
{
if(*p)
{
fun (p+1);
printf("%c",*p);
}
printf("\n hello..\n");
}
