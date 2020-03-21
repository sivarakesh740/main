#include<stdio.h>
main()
{
 int x=10,i,j;
 for(i=31;i>=0;i--)
 {
  printf("%d",x>>i&1);
 }
 printf("\n");
 printf("hex=%x\n",x);
 printf("oct=%o\n",x);
}

