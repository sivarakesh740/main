#include<stdio.h>
#include<stdlib.h>
/*main()
{
//int *p=(int *)malloc(5*sizeof(int));
int *p=(int *)calloc(5,sizeof(int));
printf("p=%u\n",(unsigned)p);
int i;
for(i=0;i<5;i++)
*(p+i)=i+10;
for(i=0;i<5;i++)
printf("p[%d]=%d\n",i,*(p+i));
free(p);
int *q=(int *)calloc(5,sizeof(int));
//int *q=(int *)malloc(5*sizeof(int));
printf("q=%u\n",(unsigned)q);
for(i=0;i<5;i++)
printf("q[%d]=%d\n",i,q[i]);
}*/
/*int main()
{
int *p=(int *)calloc(5,sizeof(int));
printf("p=%u\n",(unsigned)p);
free(p);
printf("p=%u\n",(unsigned)p);
}*/
/*int main()
{
int *p=(int *)calloc(5,sizeof(int));
printf("p=%u\n",(unsigned)p);
free(p);
p=0;
printf("p=%u\n",(unsigned)p);
}*/
/*int main()
{
int *p=(int *)calloc(5,sizeof(int));
printf("p=%u\n",(unsigned)p);
p=0;
p=(int*)malloc(5*sizeof(int));
printf("p=%u\n",(unsigned)p);
free(p);
}*/

int main()
{
int *p,n,size;
printf("enter the n value\n");
scanf("%d",&n);
p=(int*)malloc(n);
printf("%d\n",sizeof p);
printf("p=%u\n",(unsigned)p);
printf("p[-1]:%d\n",p[-1]);

scanf("%d",&size);
p=realloc(p,size);
printf("p=%u\n",(unsigned)p);
printf("p[-1]:%d\n",p[-1]);
}
