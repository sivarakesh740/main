/*#include<stdio.h>
//auto int y;invalid
main()
{
int x=10;
fun();
}
void fun()
{
int x=10;
printf("fun function\n");
printf("%d",x);
}*/

/*#include<stdio.h>
main()
{
{
int x=10;
printf("in block x=%d",x);
}
printf("outside block x=%d",x);//invalid
}*/


/*#include<stdio.h>
main()
{
int x=10;
{
int x=20;
printf("main x=%d",x);//20
}
printf("out x=%d",x);//10
}*/


/*#include<stdio.h>
main()
{
int x=10;
{
printf("in block =%d",x);//10
int x=20;
printf("in block x=%d",x);//20
}
printf("outside x=%d",x);//10
}*/

#include<stdio.h>
/*main()
{
auto int x=10;
auto int y=x;//valid
printf("%d",y);
}*/

int x=20;
int main()
{
{
int x=10;
printf("%d",x);
}
printf("x=%d",x);
}
