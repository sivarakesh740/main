#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char* argv[])
{
	if(argc!=4)
	{
		printf("invalid\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	char *p,ph;
	int size=0,i=0,j=0;
	while(fgetc(fp)!=-1)
		size++;
	rewind(fp);
	p=(char*)malloc(size*sizeof(char)+1);
	while((ph=fgetc(fp))!=-1)
		p[i++]=ph;
	p[i]='\0';
        fp=fopen(argv[1],"w");
	char *k;
        i=0;
while((k=strstr(p+i,argv[2]))!=NULL)
{
for(j=k-p;i<j;i++)
fputc(p[i],fp);
fprintf(fp,"%s",argv[3]);
i=i+strlen(argv[2]);
}
for(;p[i];i++)
fputc(p[i],fp);
}
