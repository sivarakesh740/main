#include<stdio.h>
int main()
{ 
 int i=0;
  while(1)
  {  
    i++;
    printf("hello...\n");
    
    if(i==3) 
      close(1);
  }
}
