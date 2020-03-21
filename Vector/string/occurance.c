#include<stdio.h>
main()
{
int i,j,k;
int a[10];
printf("enter the string\n");
for(i=0;i<a;i++)
scanf("%d ",&a[i]);
for(i=0;a[i];i++)
{
  for(j=i+1;a[j];j++)
  { 
   if(a[i]==a[j])
    {
    for(k=j;a[k];k++)
   
    a[k]=a[k+1];
      j--;
    }
}
}
//for(i=0;a[i];i++)
printf("after the operation:%d",a);
}
   
