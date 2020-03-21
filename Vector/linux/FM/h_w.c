#include<stdio.h>
#include<sys/stat.h>
main(int argc,char *argv[])
{
  if(argc!=3)
  {
   printf("a.out is out of range\n");
   return;
  }
   struct stat v,k,m,n;
   stat(argv[1],&v);
   stat(argv[2],&k);
   if(((int)v.st_ino) == ((int)k.st_ino))
   {
      printf("size fun=%d\n",(int)v.st_ino);
      printf("size f1=%d\n",(int)k.st_ino);
        lstat(argv[1],&v);
        lstat(argv[2],&k);
      if(((int)v.st_ino) == ((int)k.st_ino))
      { 
        printf("size fun=%d\n",(int)v.st_ino);
        printf("size f1=%d\n",(int)k.st_ino);
        printf("hard link\n");
        return;
      }
      else   
     {
         printf("size fun=%d\n",(int)v.st_ino);
         printf("size f1=%d\n",(int)k.st_ino);
         printf("soft link\n");
         return;
     }    
   }
   else
   {
      printf("No link\n");
      return;
   }
}
