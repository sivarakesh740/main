#include<stdio.h>
int x=10;
extern void fun()
{
 int x=10;
 printf("fun function\n");
 printf("%d ",x);
 printf("%d ",++x);
}
