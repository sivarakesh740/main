#include<stdio.h>
#include<fcntl.h>
int main()
{ 
  int fd[2];
  char ch='a';
  if(pipe(fd)<0)
  { 
    perror("pipe");
    return;
  }
  int count=0;
  /*while(write(fd[1],&ch,sizeof ch)!=-1) 
  printf("size-->%d\n",++count);*/
  while(1)
  {
    write(fd[1],&ch,sizeof ch);
    printf("c=%d\n",count++);
    read(fd[0],ch,sizeof ch);
  }
}
