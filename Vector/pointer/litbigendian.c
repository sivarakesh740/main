#include<stdio.h>
main()
{
int x=1;
char *cp;
cp=&x;
if(*cp==1)
printf("little endian\n");
else
printf("big endian\n");
}
