#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main()
{ 
  printf("hi...\n");
  execl("/bin/cal","cal",NULL);
  perror("execl");
  printf("after execl..\n");
}
