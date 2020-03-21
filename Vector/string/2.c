#include<stdio.h>
char *p my_strcpy(char*p char*q);
main()
{
char s[20],d[20];
printf("enter the string\n");
scanf("%s",s);
char *p=my_strcpy(d,s);
printf("%d\n",s);
printf("%d\n",p);
}
char*pmy_strcpy(char*p,char*q)
{
int i;
for(i=0;q[i];i++)
p[i]=q[i];
p[i]='\0';
return p;
}
