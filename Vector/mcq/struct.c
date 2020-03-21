#include<stdio.h>
#include<string.h>
typedef struct st
{
  int x;
  char ch;
}A;
main()
{ 
  A *p={23,'v'};//segmetation fault
  p=&k;
  printf("%d %c\n",p->x,p->ch);
}



























/*struct st
{
  int roll;
  char a[30];
  float marks;
}s={32,"siva",43.54};
main()
{
 printf("%d %s %f\n",s.roll,s.a,s.marks);
}*/




























/*struct st
{
  int x;
  char ch[10];
}v1={10,"dasa"};
main()
{
  struct st r={21,"siva"},m;
  m={32}; //invalid 
 //m.x=32;
 // strcpy(m.ch,"ram");
  printf("%d %s\n",v1.x,v1.ch); 
  printf("%d %s\n",r.x,r.ch); 
  printf("%d %s\n",m.x,m.ch); 
}*/ 
  
