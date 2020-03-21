#include<stdio.h>
char *my_strstr(char *,char*);
main()
{
	char a[50],b[50],*p;
	printf("enter the main string\n");
	scanf("%s",a);
	printf("enter the sub string\n");
	scanf("%s",b);
	p=my_strstr(a,b);
	if(p==0)
		printf("given not string is found\n");
	else
		printf("given string is  found\n");
}
char *my_strstr(char *p,char*q)
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
         	}
		if(q[j]=='\0')
                return p+i;
	}
	return 0;
}
