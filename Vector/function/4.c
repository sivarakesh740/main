/*#include<stdio.h>
main()
{
int num,ret;
printf("enter the number\n");
scanf("%d",&num);
ret=sum(num);
printf("sum=%d\n",ret);
}
int sum(int n)
{
 int r,s=0;
 while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
}
return n;
}*/

/*#include<stdio.h>
void swap(int *,int *);
int main()
{
int x=10,y=30;
swap(&x,&y);
printf("in main:x=%d y=%d\n",x,y);
}
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
//printf("in swap:x=%d y=%d\n",x,y);
}*/

#include<stdio.h>
void fun(int[],int);
int main()
{
int a[5]={12,13,14,15,16};
int n;
n=sizeof(a)/sizeof(a[0]);
fun(a,n);
int i;
printf("in main funtion\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("\n");
}
void fun(int p[],int n)
{
printf("sizeof=%d\n",sizeof(p));
int i;
printf("in fun funtion\n");
for(i=0;i<n;i++)
printf("%d\n",p[i]);
printf("\n");
//for(i=0;i<5;i++)
//p[i]=p[i]+10;
}


