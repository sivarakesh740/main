#include<stdio.h>
#include<malloc.h>
#include<string.h>
main(int argc,char **argv)
{
if(argc!=4)
{
printf("invalid\n");
return;
}
FILE *fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file doesn't exit\n");
return;
}
int size=0,i=0,j;
while(fgetc(fp)!=-1)
++size;
char *p,ch;
p=(char *)malloc(size * sizeof(char)+1);
rewind(fp);
while((ch=fgetc(fp))!=-1)
p[i++]=ch;
p[i]='\0';
char *stop;
i=0;
fp=fopen(argv[1],"w");
while((stop=strstr(p+i,argv[2]))!=NULL)
{
for(j=stop-p;i<j;i++)
fputc(p[i],fp);
fprintf(fp,"%s",argv[3]);
i=i+strlen(argv[2]);
}
for(;p[i];i++)
fputc(p[i],fp);
}

