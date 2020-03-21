#include<stdio.h>
/*extern int x;
int x=100;
void fun()
{
printf("fun function\n");
}*/

/*extern int x;
main()
{
printf("in main x=%d\n",x);//100
}
int x=100;*/

/*extern int x;
main()
{
printf("in main:x=%d\n",x);
}
static int x=10;*///invalid

/*extern int x;
int x=100;
main()
{
printf("in main :x=%d",x);
}*/

/*extern int x;
static int x=100;//both are strong
main()
{
printf("in main:x=%d\n",x);
}*/


/*static int x=100;
extern int x;
main()
{
printf("in main:x=%d\n",x);//100
}*/

/*static int x;
extern int x;
int x=10;
main()
{
printf("in main:x=%d\n",x);
}*/


/*main()
{
extern int x;
printf("in main :x=%d\n",x);//100
}
int x=100;*/

/*main()
{
extern int x;
int x=122;
printf("in main:%d\n",x);
}*/

/*main()
{
extern int x;
printf("in main :x=%d\n",x);
}
static int x=100;*/

/*main()
{
extern int x=10;//invalid
printf("in main:x=%d\n",x);
}*/

/*main()
{
extern int x;//invalid
printf("in main :x=%d\n",x);
}*/

extern int x=101;
int main()
{
printf("in main:x=%d",x);
}
