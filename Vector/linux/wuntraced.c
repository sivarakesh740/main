#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
 if(fork()==0)
 {
  printf("in child:pid=%d",getpid());
  sleep(5);
  printf("child exit...\n");
  exit(0);
 }
 else
 {
   int status;
   waitpid(-1,&status,WUNTRACED);
   printf("%d\n",status);
 }
}
