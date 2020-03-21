#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
void isr(int n)
{
 printf("in isr()...\n");
 wait(0);
}
int main()
{
 if(fork()==0)
 {
   printf("child process..\n");
   sleep(10); 
   printf("child exit\n");
   exit(0);
 }
 else
 {
   signal(17,isr);
   printf("parent process..\n");
   while(1);
 }
}
