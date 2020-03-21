#include<stdio.h>
main(int argc,char *argv[])
{
if(argc!=4)
{
printf("invalid a/.out file\n");
return;
}
FILE *fp,*fp1;
int i;
char ch;
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is doen't exit\n");
return;
}
for(i=2;i<argc;i++)
{
fp1=fopen(argv[i],"w");
while((ch=fgetc(fp))!=-1)
fputc(ch,fp1);
fclose(fp1);
rewind(fp);
}
}
