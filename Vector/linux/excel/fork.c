#include<stdio.h>
#include<unistd.h>
/*int main()
{ 
 if(fork()==0)
 {
   system("ls");
   while(1);
 }
 else  
 {
   system("pwd");
   while(1);
 }
}*/

int main()
{
 if(fork()==0)
 { 
  execl("/bin/ls","ls",NULL);
  while(1);
 }
 else 
 {
  execl("/bin/pwd","pwd",NULL);
  while(1);
 }
} 
