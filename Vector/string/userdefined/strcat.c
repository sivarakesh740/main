#include<stdio.h>
//#include<string.h>
//char *my_strcat(char *,char *);
char *my_strncat(char *,char *,int);
/*main()
  {
  char a[50],b[50],*p;
  printf("enter the string\n");
  scanf("%s",a);
  printf("enter the string2\n");
  scanf("%s",b);
  p=my_strcat(a,b);
  printf("%s\n",a);
  printf("%s\n",p);
  }
  char *my_strcat(char *p,char *q)
  {
  int i,j;
  for(i=0;p[i];i++);
  for(j=0;q[j];j++,i++)
  p[i]=q[j];
  p[i]='\0';
  return p;
  }
{
strcpy(p+strlen(p),q);
return p;
}*/
main()
{
char a[50],b[50],*p;
printf("enter the string\n");
scanf("%s",a);
printf("enter the string2\n");
scanf("%s",b);
p=my_strncat(a,b,3);
printf("%s\n",a);
printf("%s\n",p);
}
char *my_strncat(char *p,char *q,int n)
{
int i,j;
for(i=0;p[i];i++);
for(j=0;j<n;j++)
p[i++]=q[j];
p[i]='\0';
return p;
}

