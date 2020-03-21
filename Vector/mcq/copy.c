#include<stdio.h>
main()
{
 int i;
 FILE *fp,*fd;
 fp=fopen("1.c","r");
 char a[100],*p;
 fd=fopen("4.c","w");
 while(fgets(a,100,fp)!=NULL)
 {
  fputs(a,fd);
  printf("buf=%s\n",a);
 }
}























/*int main()
{
  FILE *fp,*fd;
  char ch;
  fp=fopen("1.c","r"); 
  fd=fopen("4.c","w");
  while((ch=fgetc(fp))!=-1)
  fputc(ch,fd);
}*/
