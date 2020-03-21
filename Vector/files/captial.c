#include<stdio.h>
#include<malloc.h>
main(int argc,char*argv[])
{
	if(argc!=2)
	{
		printf("usage :./a.out filename \n");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("file is doesn't exist\n");
		return;
	}
	int size=0,i=0,j;
	char ch;
	while(fgetc(fp)!=-1)
		++size;
	char *p=(char *)malloc(size*sizeof(char)+1);
	rewind(fp);
	while((ch=fgetc(fp))!=-1)
		p[i++]=ch;
	p[i]='\0';
	fp=fopen(argv[1],"w");
	for(j=0;p[j];j++)
	{
		if((p[0]==p[j]) && (p[j]>97&&p[j]<123))
			p[0]=p[0]^32;
		else if(p[j]==' ' || p[j]=='\n')
		{
			if(p[++j]>97 && p[j]<123)
				p[j]=p[j]^32;
		}
	}
	for(j=0;p[j];j++)
		fputc(p[j],fp);
	fclose(fp);
}




