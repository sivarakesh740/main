#include<stdio.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
 if(argc!=2)
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
 while(p=readdir(dp))
   printf("%s\n",p->d_name);
}

