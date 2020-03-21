#include<stdio.h>
#include<string.h>
#include<fcntl.h>
main()
{
 int fd;
 char a[20];
 mkfifo("f1",0664);
 perror("mkfifo");
 fd=open("f1",O_WRONLY);
 if(fd<0)
 {
   perror("open");
   return;
 }
 while(1)
 {
    scanf("%s",a);
    write(fd,a,strlen(a)+1);
 }
}
