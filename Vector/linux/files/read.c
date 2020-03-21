#include<stdio.h>
main()
{
  int fd;
  char ch;
  fd=open("t",O_RDONLY);
  if(fd<0)
  {
      printf("fd=%d\n",fd);
      perror("open");
      return;
  }
  while(read(fd,&ch,1)>0)
    printf("ch=%c\n",ch);
  
}
