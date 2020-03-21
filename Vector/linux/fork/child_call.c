#include<stdio.h>
main()
{
 if(fork()==0)
  {
   printf("child1:pid-%d ppid-%d\n",getpid(),getppid());
   if(fork()==0)
    {
     printf("child1:pid-%d ppid-%d\n",getpid(),getppid());
    if(fork()==0)
      {
       printf("child1:pid-%d ppid-%d\n",getpid(),getppid());
      }
      else
      while(1);
     }
    else
   while(1);
  }
  else 
 while(1);
}
