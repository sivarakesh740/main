#include<stdio.h>
void func(int[]);
main()
{
int a[]={1,2,3,4,5};
int i;
func(a);
printf("enter the content\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}
void func(int v[])
{
int i,sum=0;
for(i=0;i<5;i++)
{
v[i]=v[i]*v[i];
sum=sum+v[i];

}
printf("sum=%d\n",sum);
}


