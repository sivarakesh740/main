#include<stdio.h>
/*main()
{
int x=300;
char *p=&x;
*++p=2;
printf("%d",x);
}*/

/*main()
{
int x=300;
int *p=&x;
*++p=2;
printf("%d",x);
}*/

/*main()
{
char a[]="abcdefgh";
int *p=a;
printf("%d %d\n",p[0],p[1]);
}*/

/*main()
{
void p;//invalid
int **ptr;
int a=129;
p=&a;
ptr=&p;
printf("p=%d p=%u &p=%u\n",*p,p,&p);
}*/

/*main()
{
char a[20];
char *p,*q;
p=&a[0];
q=&a[10];
printf("%d %d\n",q-p,&q-&p);
}*/

/*main()
{
char **ptr=0;
printf("ptr=%u\n",ptr);
printf("%d\n",(int)++ptr);
}*/

/*main()
{
long long int **ptr=0;
printf("ptr=%u\n",(unsigned)ptr);
printf("%d\n",(int)++ptr);
}*/


/*main()
{
int a[]={10,20,30,40,50};
int *p=a,i;
long long **ptr=&p;
for(i=0;i<5;i++)
printf("%d ",*++*ptr);
}*/

main()
{
int a[]={10,20,30,40,50};
int i,*p=a;
int **ptr=&p;
int ***p3=(int***)&ptr;
for(i=0;i<5;i++)
printf("%d ",*++**p3);
}
