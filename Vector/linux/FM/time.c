#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
  if(argc!=2)
  {
    printf("usage is ./a.out filename\n");
    return;
  }
struct stat v;
 stat(argv[1],&v);
   printf("atime:%d\n",(int)v.st_atime);
   printf("mtime:%d\n",(int)v.st_mtime);
   printf("ctime:%d\n",(int)v.st_ctime);
  
   printf("atime:%s\n",(char*)ctime(&v.st_atime));
   printf("mtime:%s\n",(char*)ctime(&v.st_mtime));
   printf("ctime:%s\n",(char*)ctime(&v.st_ctime));
}
