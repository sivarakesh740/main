#include<stdio.h>
#include<string.h>
#include<fcntl.h>
main()
{
 int fd;
 char a[20];
 mkfifo("f1",0664);
 perror("mkfifo");
 fd=open("f1",O_RDONLY);
 if(fd<0)
 {
   perror("open");
   return;
 }
 while(1)
 {
   read(fd,a,sizeof(a));
   printf("read=%s\n",a);
 }
}
