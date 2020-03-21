#include<stdio.h>















/*main()
{
 int a[]={10,2,1,4,6,7,2},b[5];
 int i,j,k=0,l,n,count=0;
 n=sizeof(a)/sizeof(a[0]);
 printf("%d ",n);
 for(i=0;i<n;i++)
 {
  count=0;
  for(j=i+1;j<n;j++)
  {
    if(a[i]==a[j])
     {
       l++;
       count++;
       b[k]=a[j];
       k++;
     }
  }
 if(count==0)
 printf("%d ",a[i]);
 }
printf("\n"); 
for(i=0;i<l;i++)
printf("%d ",b[i]);
}*/
   



















/*main()//delele array
{
 int a[5],i,j,k,t;
 k=sizeof(a)/sizeof(a[0]);
 
 for(i=0;i<k;i++)
 scanf("%d",&a[i]);
 
 for(i=0;i<k;i++)
 {
   for(j=i+1;j<k;j++)
   {
    if(a[i]==a[j]) 
     {
      for(t=j;t<k;t++)
        a[t]=a[t+1];
        j--;
        k--;
     }
   }
 }
 printf("%d\n",k);
 for(i=0;i<k;i++)
 printf("%d ",a[i]);
}
 scanf("%d",&t);//delete the array
 
 t=t-1;
for(i=0;i<k;i++)
 {
  if(i==t)
   {
     for(j=i;j<k;j++)
       a[j]=a[j+1];
      k=k-1;
   }

 }
 for(i=0;i<k;i++)
 printf("%d ",a[i]);
}

main()//big,small,sb,ss
{
 int a[5],b[5];
 int i,j,big=0,small=0,ss=0,sb=0;
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 big=a[0];
 small=a[0];
 
 for(i=0;i<5;i++)
 {
   if(a[i]>big)
     big=a[i];
   else if(a[i]<small)
     small=a[i];
 }
 ss=big;
 for(i=0;i<5;i++)
 {
    if((a[i]>small)&&(a[i]<big)) 
      sb=a[i];
     
 }
 for(i=0;i<5;i++)
 {
    if(a[i]>small)
     {
          if(ss>a[i])
            ss=a[i];
     }
 }
 printf("ss=%d\n",ss); 
 printf("small=%d\n",small);
 printf("sb=%d\n",sb);
 printf("big=%d\n",big);
}
 
     //reverse logic
  
 for(i=0;i<5;i++)
 printf("%d ",a[i]); 
 j=0;
 for(i=5-1;i>=0;i--)
 b[j++]=a[i];

 for(i=5-1,j=0;i>j;i--,j++)
 {
     k=a[i];
    a[i]=a[j];
    a[j]=k;
 }
 printf("\n");
 
 for(i=0;i<5;i++)
 printf("%d ",a[i]);
*/
