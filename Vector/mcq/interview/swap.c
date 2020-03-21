#include<stdio.h>
main()
{
  int n=10;
  if(n>>3&1==1)
    printf("set\n");
  else
    printf("clear\n");
}
