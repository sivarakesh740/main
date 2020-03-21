#include<stdio.h>
struct 
{
  char x;
  int p;
  float k;
}r;
int main()
{
  void *m=&r;
  printf("%d",(*(struct)&r+1)-(*(struct)&m));
}

