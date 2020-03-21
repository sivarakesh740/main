#include<stdio.h>
#include<stdlib.h>
int main()
{
 if(vfork()==0)
 {
   sleep(4);
   printf("child process..\n");
  // sleep(4);
 }
 else
 {
   printf("parent process ...\n");
   exit(0);
 }
}

