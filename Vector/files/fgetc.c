#include<stdio.h>
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
char ch;
/*ch=fgetc(fp);
printf("ch=%c\n",ch);
ch=fgetc(fp);
printf("ch=%c\n",ch);
ch=fgetc(fp);
printf("ch=%c\n",ch);
ch=fgetc(fp);
printf("ch=%c\n",ch);*/
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
rewind(fp);
while((ch=fgetc(fp))!=EOF)
{
ch=ch^32;
printf("%c",ch);
}
}
/*int main(int argc,char *argv[])
{
if(argc!=2)
{
printf("invalid use of a./out\n");
return;
}
FILE *fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not exit\n");
return;
}
char ch;
ch=fgetc(fp);
printf("%c\n",ch);
ch=fgetc(fp);
printf("%c\n",ch);
ch=fgetc(fp);
printf("%c\n",ch);
//while((ch=fgetc(fp))!=EOF)
//printf("%c\n",ch);
}*/


