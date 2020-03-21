//8-09-2018
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct man
{
int x;
//char name;
float mark;
};
int main()
{
struct man *p;
p=(struct man*)malloc(sizeof(struct man));
/*p->x=100;
strcpy(p->name,"sss");
p->mark=324.4;
printf("%d %s %f\t",p->x,p->name,p->mark);
}*/
printf("enter the date\n");
scanf("%d  %f",&p->x,&p->mark);
printf("%d %f\n",p->x,p->mark);
}


































/*struct student
{
int x;
char ch;
}v;
int main()
{
struct student *p=&v;
printf("enter the value\n");
scanf("%d %c",&p->x,&p->ch);
printf("%d %c\n",(*p).x,(*p).ch);
printf("%d %c\n",p->x,p->ch);
}
int main()
{
printf("enter the value\n");
scanf("%d %c",&v.x,&v.ch);
printf("%d %c\n",v.x,v.ch);
printf("%d %c\n",(&v)->x,(&v)->ch);
}*/
