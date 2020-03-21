#include<stdio.h>
main()
{
int i,t,j;//big,small,sec;
int a[5];
printf("enter the array\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
//big=a[0];
//small=a[0];
/*for(i=0;i<5;i++)
{
 if(a[i]>a[0])
 big=a[i];
 if(a[i]<a[0])
 small=a[i];
}
for(i=0;i<5;i++)
{
 if(a[i]>>small && a[i]<<big)
   sec=a[i];
}
printf("sec=%d\n",sec);
}*/

for(i=0;i<5;i++)
for(j=0;j<5;j++)
 { 
  t=a[i];
  a[i]=a[j];
  a[j]=t;
 } 
printf("after \n");
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}
