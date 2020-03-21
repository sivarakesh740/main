#include<stdio.h>
main(int argc,char *argv[])
{
if(argc!=4)
{
printf("invalid usage\n");
return;
}
FILE *fp,*fq,*fd;
fp=fopen(argv[1],"r");
fq=fopen(argv[2],"r");
if((fp==NULL) && (fq=NULL))
{
printf("files doesn't exit\n");
return;
}
fd=fopen(argv[3],"w+");
char ch,ph;
while((ch=fgetc(fp))!=EOF)
fputc(ch,fd);
while((ph=fgetc(fq))!=EOF)
fputc(ph,fd);
fclose(fd);
}
