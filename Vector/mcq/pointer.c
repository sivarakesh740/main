#include<stdio.h>
int main()
{
 int x=10;
 int *p=&x;
 *p=*p+100;
 printf("%d ",*p);
}
/*int main()
{
 float x=7.5;
 char *p=&x,i,j;
 p=p+3;
 for(i=3;i>=0;i--) 
 {
   for(j=7;j>=0;j--)
   {
     printf("%d",(*p)>>j&1);
   }
   printf("\n");
   p=p-1;
 }
}*/























/*int main()
{
 float x=7.5;
 int *p;
 p=(int*)&x;
 printf("%.2f ",*(float*)p);
}*/

/*main()
{
 int x=257;
  void *p;
 p=(char*)&x;
 printf("%d\t",*(char*)p);
 printf("%d\t",*(int*)p);
}*/
 
