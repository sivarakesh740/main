#include<stdio.h>
#include<signal.h>
void isr(int n)
{
 printf("in isr()...\n");
}

main()
{
  void (*ptr)(int);
 ptr=signal(2,SIG_IGN);
 ptr=signal(2,ptr);
 if(ptr==SIG_DFL)
  printf("default..\n");
 else if(ptr==SIG_IGN)
  printf("ignore...\n");
 else
  printf("isr....\n");
} 

