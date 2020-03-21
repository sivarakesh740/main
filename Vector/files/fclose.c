#include<stdio.h>
main()
{
char ch;
FILE *fp;
fp=fopen("data.txt","w");
printf("enter the data\n");
while((ch=getchar())!=EOF)
fputc(ch,fp);
printf("the data has successfully written into the stream\n");
//fclose(fp);
printf("infinite loop");
while(1);
}

