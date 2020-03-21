#include<stdio.h>
#include<stdlib.h>
main()
{
//  srand(time(0));
  srand(getpid());
  int a[5],i;
  for(i=0;i<5;i++)
  {
   printf("%d", a[i]=rand()%10+1);
  }
  printf("\n");
}
