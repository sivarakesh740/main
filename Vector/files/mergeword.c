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
int i;
char ch,ph,a[50],b[50];
for(i=0;(((fscanf(fp,"%s",a))!=-1)&&((fscanf(fq,"%s",b))!=-1));i++)
{
fprintf(fd  ,"%s"  , a);
fprintf(fd  ,"%s"  , b);
}
if(a!=NULL)
while((fscanf(fp,"%s",a))!=-1)
fprintf(fd  ,"%s"  , a);
if(b!=NULL)
while((fscanf(fq,"%s",b))!=-1)
fprintf(fd ,"%s" , b);
fclose(fp);
}

