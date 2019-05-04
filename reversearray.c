#include<stdio.h>
main()
{
int a[5],b[5],i,j,n;
n=sizeof(a)/sizeof(a[0]);
printf("enter the elements..\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=n-1,j=0;i>=0;i--,j++)
{
 b[j]=a[i];
 
}
printf("after the reverse ..\n");
for(j=0;j<n;j++)
printf("%d\n",b[j]);
}
