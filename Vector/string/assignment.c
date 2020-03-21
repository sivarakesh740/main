#include<stdio.h>
main()
{
	char a[20],b[20];
	int i,j,t1,t2,count=0,count1=0;
	//n=sizeof(a)/sizeof(a[0]);
	printf("enter the string\n");
	scanf("%s",a);
	printf("enter the string\n");
	scanf("%s",b);
	//printf("%d\n",n);
//	printf("string is :%s\n",a);
//	printf("string is :%s\n",b);
	for(i=0;a[i];i++)
	{
	if(a[i]<'A'&& a[i]>'Z' || a[i]<'a' && a[i]>'z');
	else	{
			for(j=i;a[j];j++) 
				a[j]=a[j+1];
			i--;
		}
	} 
	printf("after the operation:%s\n",a);
	for(i=0;b[i];i++)
	{
	if((!b[i]<'A' || b[i]>'Z') && (b[i]<'a' || b[i]>'z'))
		{
			for(j=i;b[j];j++)
				b[j]=b[j+1];
			i--;
		}
	}
	printf("after the operation:%s\n",b); 
//	printf("before upper:%s\n",a);
	//printf("before upper:%s\n",b);
	for(i=0;a[i];i++)
	{
		a[i]=a[i]^32;
	}
	for(i=0;b[i];i++)
	{
		b[i]=b[i]^32;
	} 
	//printf("after the operation:%s\n",a);
	//printf("after the operation:%s\n",b);
	for(i=0;a[i];i++)
		++count;
	//printf("%d\n",count);
	for(i=0;b[i];i++)
		++count1;
	//printf("%d\n",count1);

	for(i=1;a[i-1];i++)
	{  
		for(j=0;j<count-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t1=a[j];
				a[j]=a[j+1];
				a[j+1]=t1;
			}
		}
	}
	//printf("after the swaping\n");
	for(i=0;a[i];i++)
		printf("%c",a[i]);

	for(i=1;b[i-1];i++)
	{  
		for(j=0;j<count1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				t1=b[j];
				b[j]=b[j+1];
				b[j+1]=t1;
			}
		}
	}
//	printf("after the swaping\n");
	for(i=0;b[i];i++)
		printf("%c",b[i]);
	for(i=0;a[i];i++)
	{
		if(a[i]!=b[i])
			break;
	}
	if(a[i]==b[i])
		printf("anagram\n");
	else
		printf("not a anagram\n");
}






