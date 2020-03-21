#include<stdio.h>
#include<malloc.h>
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
int size=0,i;
char ch;
while(fgetc(fp)!=EOF)
size++;
char *p=(char *)malloc(size*sizeof(char)+1);
while((ch=fgetc(fp))!=EOF)
p[i++]=ch;
rewind(fp);
fp=fopen(argv[1],"w");
for(i=0;p[i];i++)
fputc(p[i],fp);
fclose(fp);
}
