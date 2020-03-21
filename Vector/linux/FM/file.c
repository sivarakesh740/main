#include<stdio.h>
#include<fcntl.h>
int main()
{
   //int fd=open("siva",O_WRONLY);
   //int fd=open("siva",O_WRONLY |O_CREAT); 
  /* int fd=open("siva",O_WRONLY | O_CREAT | O_TRUNC,0663);

 if(fd<0)
  {
    perror("open");
    return;
  }
 
 printf("fd=%d\n",fd); 
 printf("file is successfully created\n");

   fd=open("sum",O_WRONLY | O_CREAT | O_TRUNC,0663);
   printf("fd=%d\n",fd);*/
  
  int fd=creat("temp.c",0664);

}
