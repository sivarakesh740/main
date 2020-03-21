#include<stdio.h>
main()
{
  int n=1234;
  int count=0;
  while(n)
  {
    n=n/10;
    count++; 
  }
  printf("%d ",count);
}
