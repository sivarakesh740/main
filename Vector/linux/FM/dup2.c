#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
  int fd1,fd2;
  fd1=open("temp",O_WRONLY | O_CREAT | O_TRUNC,0664);
  if(fd1<0)
  {
   perror("open");
   return;
  }
  printf("fd1-->%d\n",fd1);
  fd2=dup2(fd1,10);
  printf("fd1-->%d\n",fd1);
  printf("fd2--->%d\n",fd2);
  write(3,"hello india\n",11); 
  write(10,"hello vector",12);
}
