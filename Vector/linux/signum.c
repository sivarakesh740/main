#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
 if(fork()==0)
 {
   printf("in child :pid=%d\n",getpid());
   sleep(5);
   printf("child exist..\n");
   exit(0);
 }
 else 
 {
   int status;
//   waitpid(-1,&status,0);
   waitpid(-1,&status,WNOHANG); 
   printf("status=%d\n",status); 
 }
}
