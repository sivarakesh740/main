#include<stdio.h>
int main()
{
 int ret;
 printf("hello..\n");
 ret=fork();
 if(ret==0)
 {
   printf("exclusively child..\n"); 
   printf("pid=%d ppid=%d\n",getpid(),getppid());
 }
 else
 {
   printf("exclusively parent\n");
   printf("pid=%d ppid=%d\n",getpid(),getppid());
 }
}
