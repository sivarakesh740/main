#include<stdio.h>
/*main()
{
int x=10;
static int y=x;
printf("y=%d",y);
}*/

/*main()
{
static int x=10;
static int x=y;
printf("x=%d",x);
printf("y=%d",y);
}*/

/*static int x=10;
static int y=x;//inavlid
main()
{
printf("%d",x);
printf("%d",y);
}*/

/*static int x=10;//valid
static int y=20;//valid
main()
{
printf("%d",x);10
printf("%d",y);20
}*/


/*main()
{
int op=2;
switch(op)
{
case 1:printf("case1..\n");
            int x=10;
             break;
case 2:printf("case2..\n");//case2
            
             break;
case 3:printf("case3..\n");
            break;
}
}*/


/*main()
{
int op=2;
switch(op)
{
case 1:printf("case1..\n");
         static   int x=10;
             break;
case 2:printf("case2..\n");//x=10
         printf("x=%d",x);   
             break;
case 3:printf("case3..\n");
         printf("x=%d",x);   
            break;
             
case 4:printf("case3..\n");
         printf("x=%d",x);   
            break;
}
}*/
