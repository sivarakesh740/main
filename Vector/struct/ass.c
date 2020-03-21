#include<stdio.h>
struct student 
{
int roll;
char name[30];
float marks;
};
 void setdata(struct student *);
void sort(struct student *);
void display(struct student );
int main()
{
struct student s[5];
int i;
for(i=0;i<5;i++)
setdata(&s[i]);
sort(s);
for(i=0;i<5;i++)
display(s[i]);
}
void setdata(struct student *p)
{
printf("enter the roll,name,&marks\n");
scanf("%d%s%f",&p->roll,p->name,&p->marks);
}
void sort(struct student *p)
{
int op,i,j;
struct student temp;
printf("enter the option\n");
scanf("%d",&op);
switch(op)
{
case 1:
       printf("on basic of roll\n");
       for(i=1;i<5;i++)
       { 
        for(j=0;j<5-i;j++)
         {
           if(p[j].roll>p[j+1].roll)
           {
              temp=p[j];
              p[j]=p[j+1];
              p[j+1]=temp;
           }
         }
       }
   break;   
case 2:
       printf("on basic of name\n");  
       for(i=1;i<5;i++)
        {
         for(j=0;j<5-i;j++)
           {
             if(strcmp(p[j].name,p[j+1].name)>0)
                {
                  temp=p[j];
                   p[j]=p[j+1];
                   p[j+1]=temp;
                }
            }
        }
        break;
case 3: 
       printf("on basic of marks\n");
       for(i=1;i<5;i++)
       { 
        for(j=0;j<5-i;j++)
         {
           if(p[j].marks>p[j+1].marks)
           {
              temp=p[j];
              p[j]=p[j+1];
              p[j+1]=temp;
           }
         }
       }
       break;
default :
       printf("invalid option\n");
}
}
void display(struct student s)
{
printf("%d %s %f\n",s.roll,s.name,s.marks);
}
