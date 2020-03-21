#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("invalid usage of a.out\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	int size=0,i=0;
	char ch,ch1,ch2,*p;
	ch1=argv[2][0];
	ch2=argv[3][0];
	while(fgetc(fp)!=-1)
		size++;
	p=(char*)malloc(size*sizeof(char)+1);
	rewind(fp);
	while((ch=fgetc(fp))!=-1)

                p[i++]=ch;
		p[i]='\0';
		for(i=0;p[i];i++)
		{
			if(p[i]==ch1)
				p[i]=ch2;
		}
		fclose(fp);
		fp=fopen(argv[1],"w");
		for(i=0;p[i];i++)
			fputc(p[i],fp);
		fclose(fp);
	}

