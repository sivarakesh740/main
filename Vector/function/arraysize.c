#include<stdio.h>
void add(int[],int);
main()
{
int a[]={1,2,3,4,5};
int b[]={1,2,3,4,5,6,7};
int c[]={1,2,3,4,5,6,7,8,9};
add(a,5);
add(b,7);
add(c,9);
}
void add(int a[],int b)
{
int z,i;
for(i=0;i<b;i++)
{
z=z*a[i];
}
printf("z=%d\n",z);
}

