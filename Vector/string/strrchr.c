#include<stdio.h>
char *p=my_strchr(char*,int c);
#include<string.h>
main()
{
char str[40],ch,*p;
printf("enter the string1\n");
scanf("%s",str);
printf("enter the charater\n");
scanf(" %c",&ch);
char *p=my_strchr(str,ch);
//p=strrchr(str,ch);
if(p==NULL)
printf("string are not equal\n");
else
printf("string are found %s\n",p);
}
char *my_strchr(char*p,int c)
{
int i;
for(i=0;p[i];i++)
{
if(p[i]==c)
return p+i;
}
if(p[i]=='\0';
return NULL;
:}
