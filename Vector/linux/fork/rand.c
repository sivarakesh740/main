#include<stdio.h>
#include<stdlib.h>
main()
{ 
  int r,n;
  printf("enter the value\n");
  scanf("%d",&n);
  srand(n);
  r=rand();
  printf("r=%d\n",r);
  printf("RAND_MAX=%d\n",RAND_MAX);
}
