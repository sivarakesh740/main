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
if((fp==NULL) || (fq==NULL))
{
printf("files doesn't exit\n");
return;
}
fd=fopen(argv[3],"w+");
int i;
char ch,ph,buf[50],puf[50];
for(i=0;((fgets(puf,50,fq)!=NULL)&&(fgets(buf,50,fp)!=NULL));i++){
fputs(puf,fd);
fputs(buf,fd);
}
if(buf!=NULL)
while(fgets(buf,10,fp)!=NULL)
fputs(buf,fd);
if(puf!=NULL)
while(fgets(puf,10,fq)!=NULL)
fputs(puf,fd);
fclose(fp);
}

