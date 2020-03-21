#include<stdio.h>
/*main()
{
{
static int x=10;
printf("in block:x=%d",x);
}
printf("%d",x);//invalid
}*/

/*main()
{
static int x=10;
{
static int x=20;
printf("in block:x=%d",x);
}
printf("outside block=%d\n",x);
}*/

/*main()
{
static int x=10;
static int x;
}*/

/*void fun();
main()
{
fun();
fun();
fun();
}
void fun()
{
auto int x=10;//x=10;x=10,x=10;
static int x=10;//x=10;x=11;x=12;
printf("x=%d\n",x);
x++;
}*/

/*main()
{
static int x;
x=10;
printf("%d\n",x);
x++;
}*/

/*main()
{
static x;
static x;//invalid
}*/


//static global variable//


/*static x;
static x; it will compile
main()
{
}*/

/*static x=10;
static x=10;//it will not compile
main()
{
}*/

/*int x;
int x;
main()//valid
{
}*/
