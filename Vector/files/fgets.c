#include<stdio.h>
main(int argc,char *argv[])
{
if(argc!=3)
{
printf("invalid a.out\n");
return;
}
FILE *fp=fopen(argv[1],"r");
FILE *fd=fopen(argv[2],"w");
char buf[5];
while(fgets(buf,4,fp)!=NULL)
{
fputs(buf,fd);
printf("%s",buf);
}
fcloseall(fd);
}
