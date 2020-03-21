#include<stdio.h>
main()
{ 
 if(fork()==0)
 {
  sleep(2);
  printf("child process..\n");
  printf("pid=%d ppid=%d\n",getpid(),getppid());
  printf("child is exit\n");
 }
 else
 { 
   sleep(10);
   printf("parent process\n");
   printf("pid=%d ppid=%d\n",getpid(),getppid());
   printf("parent is exit\n");
   while(1);
 }
} 
