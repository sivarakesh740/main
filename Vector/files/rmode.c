#include<stdio.h>
main()
{
FILE *fp;
fp=fopen("data.txt","w+");
fprintf(fp,"%s","abcdef");
rewind(fp);
char ch;
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
}
