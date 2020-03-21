#include<stdio.h>
main(int argc,char *argv[])
{
if(argc!=3)
{
printf("invalid a/.out file\n");
return;
}
int ret;
FILE *fp,*fp1;
fp=fopen(argv[1],"r");
fp=fopen(argv[2],"w");
//ret=remove(argv[1])
if(fp==NULL)
{
printf("file is doen't exit\n");
return;
}
char ch;
while((ch=fgetc(fp))!=-1)
fputc(ch,fp1);
}
