#include<stdio.h>
main()
{
  int x=10;
  void *p;
  p=&x;
  printf("%u ",&x-(int*)p+1);
}
