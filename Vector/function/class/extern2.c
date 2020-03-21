#include<stdio.h>
/*extern void fun();
int main()
{
printf("in main function\n");
fun();
}
extern void fun()
{
printf("fun function\n");
}*/

/*#include<stdio.h>
int main()
{
printf("in main function\n");
fun();
}
static void fun()
{
printf("fun function\n");
}*/

void fun(int x);
main()
{
printf("in main function\n");
fun(10);
}
//void fun (auto int x)//invalid
//void fun (static int x)//invalid
//void fun (extern int x)//invalid
void fun (register int x)//valid
{
printf("in fun x=%d\n",x);
}
