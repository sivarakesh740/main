#include<stdio.h>
#include<stdlib.h>
main()
{
  if(fork()==0)
  {
   int t1;
   srand(getpid());
   t1=rand()%10+1;
   printf("chiild process goes to delay of%d\n",t1);
   sleep(t1);
   printf("child pid:%d ppid=%d\n",getpid(),getppid());
   printf("child is exist\n");
  }
 else
  {
   int t2;
   srand(getpid());
   t2=rand()%10+1;
   printf("parent process goes to delay of%d\n",t2);
   sleep(t2);
   printf("parent exist...\n");
  }
}  
