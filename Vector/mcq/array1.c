#include<stdio.h>
main()
{
  int a[10],p,e,n,i,j;
   
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
 
  n=sizeof(a)/sizeof(a[0]);
  scanf("%d",&p);
  scanf("%d",&e); 
  
  for(i=n-1;i>=p-1;i--)
  a[i+1]=a[i];

  a[p-1]=e;
  
  for(i=0;i<n+1;i++)
  printf("%d ",a[i]);
}
  








/*main()//non repeat number
{
  int a[]={0,3,1,0,5,1,2,0,4,5},n,i,j,count=0,k;
  n=sizeof(a)/sizeof(a[0]);
  for(i=0;i<n;i++)
  {
   count=0;
   for(j=i+1;j<n;j++)
   {
    if(a[i]==a[j])
    {
      count++;
     for(k=j;k<n-1;k++)
      a[k]=a[k+1];
      n--,j--;
    }
   }
   if(count==0)
  printf("%d ",a[i]);
 }
}*/
  
