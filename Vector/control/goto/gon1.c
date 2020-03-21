#include<stdio.h>
main()
{
	int n,i=0;
	printf("enter the number=");
	scanf("%d",&n);
abc:
	printf(" %d\n",((n/2)*i));
        if(i++<10)
		goto abc;
	printf("bye\n");
}

