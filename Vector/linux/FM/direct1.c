#include<stdio.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
 if(argc!=3)
 {
    printf("usage is ./a.out filename\n");
    return;
 }
DIR *dp;
   dp=opendir(argv[1]);
   if(dp==NULL)
   {
     perror("opendir");
     return;
   }
   struct dirent *p; 
  printf("%s\n",argv[1]);
  printf("%s\n",argv[2]);  
 if(argv[1]!=argv[2])
  {  
   while(p=readdir(dp))
   printf("%s\n",p->d_name);
  }
  else 
  {
    printf("not exit\n");
    return;
  }
}

