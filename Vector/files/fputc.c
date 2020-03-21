#include<stdio.h>
main()
{
FILE *fp;
fp=fopen("data.txt","w");
fputc('a',fp);
fputc('b',fp);
fputc('c',fp);
fputc('d',fp);
fclose(fp);
fputc('e',fp);
}
