#include<stdio.h>
/*main()
{
int a[5];
int i;
printf("n=\n");
for(i=0;i<5;i++)
scanf("%d\n",a+i);
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}*/

main()
{
int x=20;
int *p=&x;
int **ptr=&p;
int ***p3=&ptr;
printf("%u\n",x);
printf("%u\n",*p);
printf("%u\n",**ptr);
printf("%u\n",***p3);
printf("%u\n",&x);
printf("%u\n",p);
printf("%u\n",*&p);
printf("%u\n",*ptr);
printf("%u\n",**&ptr);
printf("%u\n",***&p3);
printf("%u\n",&p);
printf("%u\n",ptr);
printf("%u\n",*p3);
printf("%u\n",**p3);
printf("%u\n",***p3);
}

