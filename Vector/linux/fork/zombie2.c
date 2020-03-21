#include<stdio.h>
#include<stdlib.h>
main()
{ 
 if(fork()==0)
 {
  printf("in child...\n");
  sleep(5);
  printf("child exist..\n");
  exit(2);
 }
 else
 {
   int status; 
   wait(&status);
   status=status>>4;
   printf("status=%d\n",status);
   while(1);
 }
}
