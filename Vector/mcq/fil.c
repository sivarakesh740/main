#include<stdio.h>
main()
{
  FILE *fp;
  char ch;
  fp=fopen("4.c","w");
  while((ch=getchar())!=-1) 
  fputc(ch,fp);
  rewind(fp);
  printf("ftell=%ld",ftell(fp));
  int rem;
  rem=remove("4.c");
  if(rem==NULL)
     printf("file doesn't exit");
  else
    printf("file is remove");
}
