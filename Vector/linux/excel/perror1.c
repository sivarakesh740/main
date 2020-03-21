#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main()
{ 
 printf("hi...\n"); 
 execlp("cal","cal",NULL);
// execl("cal","cal",NULL);
 perror("execl");
 printf("after execl...\n");
}
