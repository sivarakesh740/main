#include<stdio.h>
#include<fcntl.h>
main()
{
int fd;
mkfifo("f1",0664);
perror("mkfifo");
printf("hi..\n");
fd=open("f1",O_RDONLY);
if(fd<0)
{
  perror("open");
  return;
}
printf("hello...\n");
}
