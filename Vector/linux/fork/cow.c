#include<stdio.h>
int i=10;
main()
{
 if(fork()==0)
 {
  i=20;
  printf("in child:i=%d\n",i); 
 }
 else
 {
   sleep(3);
   printf("in parent i=%d\n",i);
 }
}
