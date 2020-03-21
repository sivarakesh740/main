#include<stdio.h>
/*main()
{
 printf("xs");
 printf("cs");
 printf("dsa");
}*/
void swap(char x);
int main()
{ 
  char x=65;
  swap(x);
}
void swap(char x)
{
  char y=x;
  printf("%d",y);
}
