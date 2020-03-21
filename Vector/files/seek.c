#include<stdio.h>
main()
{
FILE *fp=fopen("data.txt","r");
fseek(fp,5,SEEK_SET);
char ch;
int pos;
ch=fgetc(fp);
pos=ftell(fp);
printf("ch=%c pos=%d\n",ch,pos);
//fseek(fp,-5,SEEK_CUR);
fseek(fp,-3,SEEK_END);
pos=ftell(fp);
ch=fgetc(fp);
printf("ch=%c pos=%d\n",ch,pos);}

