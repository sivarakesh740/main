#include<stdio.h>
/*(int main()
{
typedef  int count;
count i;
for(i=0;i<5;i++)
printf("hai\n");
}*/
/*typedef int temp_sensor;
temp_sensor temp=33.5;
printf("%f\n",temp);
}*/
/*typedef char charater;
charater ch='a';
printf("%d %c\n",ch,ch);
}*/
/*typedef int INT;
typedef int* INT_PTR;
INT x=10,y=20;
INT_PTR p,q;
p=&x;
q=&y;
printf("&x=%p &y=%p\n",&x,&y);
printf("p=%p q=%p\n",p,q);
printf("x=%d y=%d\n",*p,*q);
}*/
/*typedef int INDEX;
typedef int INT_ARRAY[5];
INDEX i;
INT_ARRAY a={1,2,3,4,5};
INT_ARRAY b={11,22,33,44,55};
printf("sizeof a:%d\n",sizeof(a));
printf("sizeof a:%d\n",sizeof(b));
for(i=0;i<5;i++)
printf("%d\n",a[i]);
printf("\n");
for(i=0;i<5;i++)
printf("%d\n",b[i]);
}*/
/*typedef int FUN_DECLARE(int x,int y);
FUN_DECLARE add,sub,mul;
int main()
{
int a=10,b=4,c;
c=add(a,b);
printf("add(a,b)=%d\n",c);
c=sub(a,b);
printf("sub(a,b)=%d\n",c);
c=mul(a,b);
printf("mul(a,b)=%d\n",c);
}
int add(int x,int y)
{
return x+y;
}
int sub(int x,int y)
{
return x-y;
}
int mul(int x,int y)
{
return x*y;
}*/
typedef struct student
{
int roll;
char name[30];
float marks;
}ST;
void setdata(ST *);
void print(ST );
int main()
{
ST s;
setdata(&s);
print(s);
}
void setdata(ST *p)
{
scanf("%d%s%f",&p->roll,p->name,&p->marks);
}
void print(ST p)
{
printf("%d%s%f\n",p.roll,p.name,p.marks);
}


