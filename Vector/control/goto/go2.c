#include<stdio.h>
main()
{
int n,m,i=1,j=1;
printf("n=");
scanf("%d",&n);
printf("m=");
scanf("%d",&m);
abc:
printf("%d*%d*%d\n",n,i,n*i);
if(i++<10)
printf("%d*%d*%d\n",m,j,m*j);
if(j++<10)
goto abc;
}





