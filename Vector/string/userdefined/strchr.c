#include<stdio.h>
char *my_strchr(char*,char);
//char *my_strrchr(char*,char);
main()
{
	char a[50],ch,*p;
	printf("enter the string\n");
	gets(a);
	printf("enter the charter\n");
	scanf(" %c",&ch);
	p=my_strchr(a,ch);
	if(p==0)
		printf("charter is not found \n");
	else
		printf("charter is  found\n");
}
char *my_strchr(char*p,char c)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==c)
			return p+i;
	          
	}
              return 0;
	
          
}
/*main()
{
	char a[50],ch,*p;
	printf("enter the string\n");
	gets(a);
	printf("enter the charter\n");
	scanf(" %c",&ch);
	p=my_strrchr(a,ch);
	if(p==0)
		printf("charter is not found \n");
	else
		printf("charter is  found\n");
}
char *my_strrchr(char*p,char c)
{
	int i;
	for(i=0;p[i];i++);
        for(--i;i>=0;i--)
	{
		if(p[i]==c)
			return p+i;
	
	}    return 0;
	
if(i==-1);
}*/


