#include<stdio.h>
int my_strcmp(char *p,char *q);
#include<string.h>
main()
{
char s1[20],s2[20];
printf("enter the string\n");
scanf("%s",s1);
printf("enter the string2\n");
scanf("%s",s2);
int r=my_strcmp(s1,s2);
if(r==0)
printf("s1&s2 are equal\n");
else if(r==1)
printf("s1 is greater ,s2 is smaller\n");
else
printf("s1 is smaller,s2 is greter\n");
}
int my_strcmp(char *p,char *q)
{
int i;
for(i=0;p[i]||q[i];i++)
{
if(p[i]||q[i])
continue;
else if(p[i]>q[i])
return 1;
else
return -1;
}
return 0;
}
