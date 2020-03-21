#include<stdio.h>
main()
{
FILE *fp=fopen("data.txt","r");
char ch;
printf("ftell=%ld\n",ftell(fp));
while((ch=fgetc(fp))!=-1)
printf("%c",ch);
printf("ftell=%ld\n",ftell(fp));
printf("2 time read\n");
rewind(fp);
printf("ftell=%ld\n",ftell(fp));
while((ch=fgetc(fp))!=-1)
printf("%c",ch);
printf("ftell=%ld\n",ftell(fp));
}
