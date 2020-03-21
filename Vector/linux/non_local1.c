#include<stdio.h>
#include<setjmp.h>
jmp_buf v;
void abc();
main()
{ 
  int r; 
  printf("hello...\n");
  r=setjmp(v);
  printf("r=%d\n",r);
  sleep(2);
  printf("after the setjmp()\n");
  abc();
  printf("after abc()..\n");
}
void abc()
{
  int k;
  printf("in abc fun\n");
  longjmp(v,1);
  printf("after the longjump\n");
}
