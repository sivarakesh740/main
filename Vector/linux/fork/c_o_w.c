#include<stdio.h>
int i=10;
main()
{
 if(fork()==0)
 { 
   printf("in child i=%d\n",i);
   i=200;
   printf("in child i=%d\n",i);
   sleep(5);
   printf("child exit..\n");
 }
 else
 {
  sleep(2);
  printf("in parent ...\n");
  printf("i=%d\n",i);
 }
}
