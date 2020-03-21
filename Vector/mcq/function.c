#include<stdio.h>
int str_char(char *p,char *q);
main()
{
 char a[12];
 char b[21];
 scanf("%s",a);
 scanf("%s",b);
 int r=str_char(a,b);
 if(r==0)
 printf(" present\n");
 else if(r==1)
 printf("graeter is present\n");
 else
  printf("smaller\n");
}
int str_char(char *p,char *q)
{
 int i,j;
 for(i=0,j=0;p[i]||q[j];i++,j++)
 {
   if(p[i]==q[j])
     continue;
    else if(p[i]>p[j])
       return 1;
     return -1;
  }
 return 0;
} 
   


