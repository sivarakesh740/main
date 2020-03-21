#include<stdio.h>
main()
{
 char a[20];
 int i,j,k;
 scanf("%s",a);
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
 printf("%s ",a);
}
 
 
