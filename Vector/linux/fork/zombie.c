#include<stdio.h>
main()
{
 int x;

 if(x=fork()==0)
 {
   printf("%d \n",x);
   printf("child:pid=%d ppid=%d\n",getpid(),getppid());
   printf("child is exist..\n");
 }
 else
 {
   sleep(1);
   printf("parent:pid=%d\n ppid=%d\n",getpid(),getppid());
   while(1);
 }

}
