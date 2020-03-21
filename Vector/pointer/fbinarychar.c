#include<stdio.h>
main()
{
int i,j;
double x=7.5;
//float x=7.5;
char *cp;
cp=&x;
//cp=cp+3;
//for(i=0;i<=3;i++)
//for(i=3;i>=0;i--)
//{
// for(j=7;j>=0;j--)
// printf("%d",*cp>>j&1);
//printf("%d",*(cp+i)>>j&1);
//printf("\n");
// cp=cp-1;
//}
//}
cp=cp+7;
for(i=0;i<=7;i++)
{
for(j=7;j>=0;j--)
printf("%d",(*cp)>>j&1);
printf("\n");
cp=cp-1;
}
}
