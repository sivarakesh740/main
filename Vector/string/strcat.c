#include<stdio.h>
char* my_strncat(char*d,char*s,int x);
#include<string.h>
main()
{
char s[50],d[50];
printf("enter the string1\n");
scanf("%s",s);
printf("enter the string2\n");
scanf("%s",d);
//char*p=my_strcat(d,s);
char*p = strncat(d,s);
printf("%s\n",d);
//printf("%s\n",s);
}
int* my_stnrcat(char*d,char*s,int x=3)
/*{
 int i,j;
 for(i=0;d[i];i++);
 for(j=0;s[i]&&i<x;j++,i++)
d[i]=s[j];
d[i]='\0';
return d;
}*/
{
strncpy(d+strlen(d),s,3);
return d;
}
