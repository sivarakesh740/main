#include<stdio.h>
int my_strlen(char*);
main()
{
char a[50];
printf("enter the string\n");
gets(a);
int p=my_strlen(a);
printf("len=%d\n",p);
}
int my_strlen(char*a)
{
int i;
for(i=0;a[i];i++);
return i;
}

