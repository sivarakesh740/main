#include<stdio.h>
//int my_strcmp(char *,char *);
int my_strcmp(char *,char *,int );
/*main()
{
	char a[50],b[50];
	printf("enter the string 1\n");
	gets(a);
	printf("enter the string 2\n");
	gets(b);
	int p=my_strcmp(a,b);
	if(p==0)
		printf("string are equal\n");
	else if(p==1)
		printf("s1 is greater than s2\n");
	else
		printf("s2 is greater then s1\n");
}
int my_strcmp(char *p,char *q)
{
	int i;
	for(i=0;p[i]||q[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]>q[i])
		return 1;
	else if(p[i]<q[i])
		return -1;
	else
		return 0;
}*/



main()
{
	char a[50],b[50];
	printf("enter the string 1\n");
	gets(a);
	printf("enter the string 2\n");
	gets(b);
	int p=my_strcmp(a,b,4);
	if(p==0)
		printf("string are equal\n");
	else if(p==1)
		printf("s1 is greater than s2\n");
	else
		printf("s2 is greater then s1\n");
}
int my_strcmp(char *p,char *q,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]>q[i])
		return 1;
	else if(p[i]<q[i])
		return -1;
	else
		return 0;
}
