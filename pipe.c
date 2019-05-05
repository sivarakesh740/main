#include<stdio.h>
main()
{
 int fd[2];
 if(pipe(fd)<0)
 { 
  perror("pipe");
  return;
 }
 printf("fd[0]=%d fd[1]=%d\n",fd[0],fd[1]);
 if(fork()==0)
 {
   printf("child\n");
   char a[20];
   scanf("%s",a);
   write(fd[1],a,strlen(a)+1);
 }
 else
 {
  printf("parent\n");
  char b[20];
  read (fd[0],b,sizeof(b));
  printf("after reading from pipe=%s\n",b);
 }
}

