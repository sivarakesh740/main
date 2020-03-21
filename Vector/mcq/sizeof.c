#include<stdio.h>
main()
{
  int a=5,b=3;
  char *p;
  int *q,x;
  float *m,y;
  double *g,z;
/*printf("*p=%d\n",sizeof(*p));
printf("p=%d\n",sizeof(p));
printf("a=%d\n",sizeof(a));
printf("*q=%d\n",sizeof(*q));
printf("q=%d\n",sizeof(q));
printf("x=%d\n",sizeof(x));
printf("*m=%d\n",sizeof(*m));
printf("m=%d\n",sizeof(m));
printf("y=%d\n",sizeof(y));
printf("*q=%d\n",sizeof(*g));
printf("q=%d\n",sizeof(g));
printf("z=%d\n",sizeof(z));*/
printf("sun=%d\n",sizeof(a+b));
}
