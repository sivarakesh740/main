#include<stdio.h>
void main()
{
  int i,j,k;
  for(i=5;i>0;i--) 
  { 
    for(j=1;j<=5;j++)
    {
         if(i==j)
         printf("*");
         printf(" ");
    }
   printf("\n");
  }
}
