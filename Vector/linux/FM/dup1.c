#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{ 
  int fd;
  fd=open("temp",O_WRONLY|O_CREAT | O_TRUNC,0664);
  printf("fd=%d\n",fd);
  if(fd<0)
  {
    perror("open");
    return; 
  }
  close(1);
  int fd1=dup(fd);
  printf("fd1-->%d\n",fd1);
  write(fd1,"hello ",6); 
  execlp("date","date",NULL);
  printf("after execlp");
}


