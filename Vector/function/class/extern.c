#include<stdio.h>
/*int x=10;
main()
{
printf("x=%d",x);
}*/


/*extern int x=10;
main()
{
printf("x=%d",x);//it will give warning x=10;
}*/


/*extern int x;//error
main()
{
printf("x=%d\n",x);
}*/

/*extern int x;
 int x=10;
main()
{
printf("x=%d\n",x);//10
}*/

/*extern int x=10;
extern int y=x;//error
main()
{
printf("x=%d\n",x);
printf("x=%d\n",x);
}*/


#include<stdio.h>
extern int x;
main()
{
printf("in main :x=%d\n",x);
}

