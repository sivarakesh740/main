#include<stdio.h>
char *my_substring(char *,char *);
void changestring(char*,char*,char*);
main()
{
	char a[30];
	char b[25];
	char c[25];
	printf("enter the string\n");
	gets(a);
	printf("enter the sub string\n");
	gets(b);
	printf("change string\n");
	gets(c);
	char *p=my_substring(a,b);
	if(p==0)
		printf("sub string is not present\n");
	else
		changestring(a,b,c);
}
char *my_substring(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(q[j]==p[i+j])
					continue;
				else
					break;
			}
			if(q[j]=='\0')
				return q;
		}
	}
	return 0;
}
void changestring(char *p,char *q,char *z)
{
	int i,j,n,k;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{ 
				if(q[j]==p[i+j])
					continue;
				else
					break;
			}
			if(q[j]=='\0')
			{
				for(j=i,k=0;z[k];j++,k++)
				{
					p[j]=z[k];
				}
			}
		} 
	}
	printf("%s\n",p);
}
