#include<stdio.h>
/*struct student
{
int roll;
char name[23];
float marks;
}s={10,"siva",95.6};
int main()
{
printf("s.roll=%d s.name=%s s.marks=%f\n",s.roll,s.name,s.marks);
//printf("s.roll=%d s.name=%s s.marks=%f\n",(&s).roll,(&s).name,(&s)marks)
}*/

/*struct st
{
int x;
char ch;
}v1={10,'A'};
int main()
{
struct st v2;
v2.x=11;
v2.ch='B';
printf("x=%d y=%c\n",v1.x,v1.ch);
printf("x=%d y=%c\n",v2.x,v2.ch);
}*/
struct st
{
int x;
char ch;
}v;
int main()
{
printf("enter the value\n");
scanf("%d %c",&v.x,&v.ch);
printf("%d %c\n",v.x,v.ch);
}
