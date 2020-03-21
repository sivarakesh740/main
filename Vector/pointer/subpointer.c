#include<stdio.h>
main()
{

/*int y=20;
int *p1=&x;
int *p2=&y;
printf("%u\n",p1+p2);not possible add address of pointer

int y=20;
int *p1=&x;
int *p2=&y;
printf("%u\n",p1*p2);not possible mul address of pointer

int y=20;
int *p1=&x;
int *p2=&y;
printf("%u\n",p1/p2);not possible div address of pointer*/

//only subtration possible

int x=20;
int y=10;
int *p1=&x;
int *p2=&y;
printf("%u\n",p1);
printf("%u\n",p2);
printf("%d\n",p1-p2);
printf("%u\n",p2-p1);
} 
