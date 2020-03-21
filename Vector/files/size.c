#include<stdio.h>
main(int argc,char *argv[])
{
if(argc!=2)
{
printf("invlaid use of a.out\n");
return;
}
char ch;
int count=0,line=0;
FILE *fp;
fp=fopen(argv[1],"r");
while((ch=fgetc(fp))!=-1);
{
count++;
if(ch=='\n')
line++;
}
printf("count=%d line=%d\t",count,line);
}
