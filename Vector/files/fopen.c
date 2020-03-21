#include<stdio.h>
main()
{
FILE *pk;
pk=fopen("fun.c","r");
if(pk!=NULL)
printf("file is exits\n");
else
printf("file is not exits\n");
}
