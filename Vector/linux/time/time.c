#include<stdio.h>
#include<time.h>
main()
{
  time_t t; 
  while(1)
  {
     time(&t);
    printf("t=%u\n",(unsigned )t);   
    printf("t=%s\n",ctime(&t));
     sleep(5); 
    system("clear");
  }
}
    
 
