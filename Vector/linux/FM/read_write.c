#include<stdio.h>
#include<sys/stat.h>
main(int argc,char *argv[])
{
  if(argc!=2)
  {
   printf("usage is :a.out filename\n");
   return;
  }
struct stat v;
if(lstat(argv[1],&v)<0)
{
  perror("stat");
  return;
}
 if(S_ISREG(v.st_mode))
   printf("regular file\n");
 
 if(S_ISDIR(v.st_mode))
   printf("directory file\n");
 
 if(S_ISLNK(v.st_mode))
   printf("link file\n");
}
 
