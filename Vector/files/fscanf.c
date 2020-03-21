#include<stdio.h>
main()
{
FILE *fp=fopen("data.txt","r");
char a[50],b;
int count=0;
while(fscanf(fp,"%s",b)!=EOF)
{
printf("%s\n",a);
count++;
}
printf("%d\n",count);
}
