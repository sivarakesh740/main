#include<stdio.h>
#include<string.h>
 int fact(int );
main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	int res=fact(num);
	printf("%d!=%d\n",num,res);
}
 int fact(int n)
{
	static int f=1;
	if(n!=0)
	{
		f=f*n;
		n--;
		return fact(n);
	}
	else
		return f;
}

