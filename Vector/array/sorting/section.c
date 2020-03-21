#include<stdio.h>
main()
{
	int a[5],i,j,n,t;
	n=(sizeof(a)/sizeof a[0]);
        printf("%d",n);
	printf("enter the element..\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
 for(i=0;i<n;i++)
 printf("%d",a[i]);
}

