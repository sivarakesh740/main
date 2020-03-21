#include<stdio.h>
//char *my_strcpy(char *,char *);
char *my_strncpy(char *,char *,int);
/*main()
{
char s[50],d[50];
printf("enter the string 1\n");
gets(s);
printf("enter the string 2\n");
gets(d);
char *p=my_strcpy(s,d);
printf("%s\n",p);
printf("%s\n",s);
}
char *my_strcpy(char *s,char *d)
{
int i;
for(i=0;d[i];i++)
s[i]=d[i];
s[i]='\0';
return s;
}*/


main()
{
char s[50],d[50],*p;
printf("enter the string 1\n");
gets(s);
printf("enter the string 2\n");
gets(d);
p=my_strncpy(s,d,4);
printf("%s\n",p);
printf("%s\n",s);
}
char *my_strncpy(char *s,char *d,int n)
{
int i;
for(i=0;d[i]&&i<n;i++)
s[i]=d[i];
s[i]='\0';
return s;
}
