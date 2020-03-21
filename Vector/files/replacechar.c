#include<stdio.h>
#include<stdlib.h>
main(int argc,char*argv[])
{
	if(argc!=4)
	{
		printf("invalid\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	char ch,ch1,*p,ph;
	ch=argv[2][0];
	ch1=argv[3][0];
	int size=0,i=0;
	while(fgetc(fp)!=-1)
		size++;
	rewind(fp);
	p=(char*)malloc(size*sizeof(char)+1);
	while((ph=fgetc(fp))!=-1)
		p[i++]=ph;
	p[i]='\0';
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
			p[i]=ch1;
	}
        fclose(fp);
	fp=fopen(argv[1],"w");
	for(i=0;p[i];i++)
		fputc(p[i],fp);
	fclose(fp);
}
