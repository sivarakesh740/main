#include<stdio.h>
main()
{ 
  static int x=0; 
 if(x<100)
 {
  printf("%d\t",x++);
  main();
 }
}
