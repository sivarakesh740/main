#include<stdio.h>
#include<setjmp.h>
jmp_buf v;
main()
{
  int r; 
  printf("hello...\n");
  r=setjmp(v);
  printf("r=%d\n",r);
  printf("after setjmp...\n");
  sleep(2);
  printf("long jump...\n");
  longjmp(v,3);
  printf("long jump().........\n");
}
