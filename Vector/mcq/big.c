#include<stdio.h>
/*int little_end(int x);
main()
{ 
 int little=0xAABBCCDD;
printf("little=0x%x\n",little);
 int big=little_end(little);
printf("big=0x%x\n",big);
}
 int little_end( int x)
{
  return(((x>>24) & 0x000000ff) | ((x>>8)& 0x0000ff00)|((x<<8)&0x00ff0000)|((x<<24)&0xff000000));
}*/

short little_end(short x);
main()
{ 
 short little=0xAABB;
printf("little=0x%x\n",little);
 short big=little_end(little);
printf("big=0x%x\n",big);
}
 short little_end( short x)
{
  return(}































/*  char a=1,i;
  char *p=&a;
  if(*p==1)
    printf("little endian\n");
  else
    printf("big endian\n");
  for(i=0;i<7;i++) 
    a=a<<i;
  if(*p==1)
    printf("little endian\n");
  else
    printf("big endian\n");*/
/*char x=1;
char y=~1,*p;
p=&y;
if(*p==1)
    printf("little endian\n");
    else
    printf("big endian\n");
}*/
