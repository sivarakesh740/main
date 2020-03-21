#include<stdio.h>
main(int argc,char *argv[])
{
if(argc!=2)
{
printf("invalid a.out\n");
return;
}
FILE *fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file doesn't exit\n");
return;
}
int count=0,length=0,i=0,j=0;
char ch;
while((ch=fgetc(fp))!=EOF)
{
count++;
if(ch=='\n')
{
if(length<count)
{
length=count;
}
count=0;
}
}
}
