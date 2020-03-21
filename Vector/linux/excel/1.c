#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/*int main()
{
 printf("hi..\n");
 system("ls");
 printf("hello...\n");
}*/

int main()
{
 printf("hi...\n");
 execl("/bin/ls","ls",NULL);
 printf("hello..\n");
}
