#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
/*main()
{ 
 printf("pid=%d ppid=%d\n",getpid(),getppid());
 execl("./linux/excel/","fork",NULL);
 printf("after execl..\n");
}*/

int main()
{ 
  printf("p1 process:pid=%d ppid=%d\n",getpid(),getppid());
  printf("p1 process is in infinite loop..\n");
  while(1);
}
