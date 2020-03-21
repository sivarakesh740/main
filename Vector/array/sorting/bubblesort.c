#include<stdio.h>
main()
{
	int a[5],i,j,n,t;
        n=sizeof(a)/sizeof(a[0]);
	printf("enter the value element\n");
	for(i=0;i<n;i++)
		scanf("%d\n",&a[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("after the sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

