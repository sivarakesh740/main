#include<stdio.h>
main()
{
/*int a[5],i,j,n,big=0;
n=sizeof(a)/sizeof(a[0]);
printf("enter the value..\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
big=a[0]-a[1];
for(i=2;i<n;i++)
{
if(a[i]>big)
big=a[i];
}
printf("big=%d\n",big);
}*/

int a[10]={12,33,43,54,65,32,21,34,5465};
int *p,*q,*r;
p=a+2;
q=a+2;
r=a+2;
printf("%d %d %d\n",p[2],q[3],r[4]);
}
