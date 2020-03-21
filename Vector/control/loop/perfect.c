#include<stdio.h>
main()
{
int n,i=1,s=0,temp,r;
printf("n=");
scanf("%d",&n);
//temp=n;
//while(i<n)
for(i=1;i<n;i++)
{
r=n%i;
if(r==0)
s=s+i;
//i++;
}
if(s==n)
printf("perfect\n");
else
printf("not perfect\n");
}
