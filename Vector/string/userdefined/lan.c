#include<stdio.h>
#include<string.h>
main()
{
char a[50];//="good 123 boy 321";
int i,j,k,count=0,n=0,temp=0;
printf("enter the string\n");
gets(a);
n=strlen(a);
a[n]=' ';
for(i=0;a[i];i++)
{
if(a[i]!=' ')
{
count++;
}
else if(a[i]==' ')
{
for(j=i-count,k=i-1;j<k;j++,k--)
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
}
count=0;
continue;	
}
}
a[n+1]='\0';
printf("%s\n",a);
}

