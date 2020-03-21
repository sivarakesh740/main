//10-9-2018
#include<stdlib.h>
#include<stdio.h>

/*struct student
{
int roll;
char name[20];
float marks;
};
void setdata(struct student *p);
void print(struct student s);
int main()
{
struct student s1,s2,s3;
setdata(&s1);
setdata(&s2);
setdata(&s3);
print(s1);
print(s2);
print(s3);
}
void setdata(struct student *p)
{
static int i=1;
printf("enter the roll,name,&marks-%d record\n",i++);
scanf("%d %s %f",&p->roll,p->name,&p->marks);
}
void print(struct student s)
{
static int i=1;
printf("record-%d:",i++);
printf("%d %s %f\n",s.roll,s.name,s.marks);
}*/
struct student
{
int roll;
char *name;
float marks;
};
int main()
{
struct student s;
s.name=(char *)malloc(sizeof(char));
scanf("%d %s %f",&s.roll,s.name,&s.marks);
printf("%d %s %f\n",s.roll,s.name,s.marks);
}
