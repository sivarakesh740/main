#include<stdio.h>
main()
{ 
  static int i=0;
  if(i<100)
  {
  printf("%d ",i++);
  main();
  }

}
