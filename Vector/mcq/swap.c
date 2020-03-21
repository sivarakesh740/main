#include<stdio.h>
main()
{
 int a=10,b=20;
 // a^=b^=a^=b;

/*a=a^b;
 b=a^b;
 a=a^b;*/

/* a=a+b;
 b=a-b;
 a=a-b;*/
 a=a+b,b=a-b,a=a-b;
 
 printf("a=%d\n",a);
 printf("b=%d\n",b);
}
