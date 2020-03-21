#include<stdio.h>
/*main()
{
 int i,j,n=5,k,l;
 for(i=-n;i<=n;i++)
 {
   k=1;
   if(i<0)
     l=-i;
    else
      l=i;
  for(j=0;j<n+1;j++)
   {
     if(j<5-l)
        printf(" ");
      else
        printf("%d ",k++);
   }
   printf("\n");
 }
}*/


main()
{
 int i,j,n=5,k,l;
 for(i=1;i<=n;i++)
 {
   k=1;
  for(j=-n;j<=n;j++)
   {
     if((-i<j)&&(j<i))
        printf("  ");
      else
        printf("%d ",k++);
   }
   printf("\n");
 }
}


/*
 int i,j,k;
 for(i=1;i<=5;i++)
 {k=1;
  for(j=0;j<i;j++)
   {
     if(j<5-i)
        printf("  ");
      else
        printf("%d ",k++);
   }
   printf("\n");
 }
}*/
