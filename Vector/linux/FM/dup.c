#include<stdio.h>
#include<fcntl.h>
int main()
{
  int fd1,fd2,fd3;
  fd1=open("temp",O_WRONLY | O_CREAT | O_TRUNC,0664);
  if(fd1<0)
  {
    perror("open");
    return;
  }
  fd2=dup(fd1); 
  fd3=dup(fd2);
  printf("fd1=%d\n",fd1);
  printf("fd2=%d\n",fd2);
  printf("fd3=%d\n",fd3);
  write(fd1,"hello world",11);
  write(fd2,"hello vector",12);
  write(fd3,"hello rakesh",12);
}

