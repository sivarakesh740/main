#include<stdio.h>
#include<stdlib.h>
main()
{
  int i,j,k=0,n,temp=0;
  int a[5]={3,1,2,9,4},b[5]={7,5,8,6,0};
  j=sizeof(a)/sizeof(a[0]);
  n=j+sizeof(b)/sizeof(b[0]);
  int *p=(int*)malloc(n*sizeof(int));
 
  for(i=0;i<5;i++)
  p[k++]=a[i];
 
  for(i=0;i<5;i++)
  p[k++]=b[i];
  
  printf("before swap array\n"); 
  for(i=0;i<n;i++)
  printf("%d ",p[i]);

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
       if(p[i]>p[j])
       {
          temp=p[i]; 
          p[i]=p[j];
          p[j]=temp;
       }
    } 
 }
 
  printf("before swap array\n"); 
  for(i=0;i<n;i++)
  printf("%d ",p[i]);
}
