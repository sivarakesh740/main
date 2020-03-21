#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>
int main()
{ 
 struct rlimit v;
 getrlimit(RLIMIT_CPU,&v);
 printf("soft limit:%u\n",(unsigned int)v.rlim_cur);
 printf("hard limit:%u\n",(unsigned int)v.rlim_max); 
   v.rlim_cur=5;
 setrlimit(RLIMIT_CPU,&v);
 getrlimit(RLIMIT_CPU,&v);
 printf("soft limit:%u\n",(unsigned int)v.rlim_cur);
 printf("hard limit:%u\n",(unsigned int)v.rlim_max); 
 while(1);
} 
 
