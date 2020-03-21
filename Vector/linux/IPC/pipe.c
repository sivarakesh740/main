#include<stdio.h>
#include<string.h>
int main()
{ 
  int fd[2];
  if(pipe(fd)<0)
  {  
    perror("open");
    return;
  }
   printf("fd[0]=%d fd[1]=%d\n",fd[0],fd[1]);
  if(fork()==0)
  {
    char b[50];
    read(fd[0],b,sizeof(b));
    printf("in child-->%s\n",b);
  }
  else
  {
   char a[50]; 
   printf("enter the string in parent side..\n");
   scanf("%s",a);
   write(fd[1],a,strlen(a)+1);
   sleep(5);
 }
}
