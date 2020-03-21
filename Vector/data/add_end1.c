#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
int roll;
char name[20];
float marks;
struct student *next;
}ST;
void add_end(ST**);
void print(ST*);
int count(ST *);
void save(ST *);
void rev_print(ST *ptr);
void rev_link(ST**);
void deleting_all(ST**)
int main()
{
 ST *hptr=0;
 char ch;
 do{
 add_end(&hptr);
 printf("do you want enter the charater\n");
 scanf(" %c",&ch);
 }while((ch=='y') ||(ch=='Y'));
 print(hptr); 
 int x=count(hptr);
 printf("%d\n",x);
 //rev_link(&hptr); 
 //rev_print(hptr);
 //save(hptr);
 deleting_all(&hptr);
 print(hptr); 
}
void add_end(ST**ptr)
{
  ST *temp;
  temp=(ST*)malloc(sizeof(ST));
  printf("enter the roll,name,marks\n");
  scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
 
  if((*ptr==0)||(temp->roll < (*ptr)->roll))
  { 
    temp->next=*ptr;
    *ptr=temp;
  }
  else
  {
    ST *last=*ptr;
   while((last->next!=0) && (last->next->roll < temp->roll))
   last=last->next;
   temp->next=last->next;
   last->next=temp;
  }
}
void print(ST *ptr)
{
  while(ptr!=0)
  {
   printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
   ptr=ptr->next;
  }
}  
int count(ST *ptr)
{
 int c=0;
  while(ptr!=0)
  {
  c++;
  ptr=ptr->next;
  }
 return c;
}
void save(ST *ptr)
{
  FILE *fp;
  fp=fopen("file.x","w");
  while(ptr!=0)
  {
   fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
   ptr=ptr->next;
  }  
}
/*void rev_print(ST *ptr)
{
ST *temp=ptr;
int c=count(ptr);
int i,j;
for(i=0;i<c;i++)
{
 ptr=temp;
 for(j=0;j<c-1;j++)
 ptr=ptr->next;
 printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
}
} 
}*/
/*void rev_print(ST* ptr)
{
 int i,c=count(ptr);
 ST **p=(ST**)malloc(c*sizeof(ST*));
 for(i=0;i<c;i++)
 {
  p[i]=ptr;
  ptr=ptr->next;
 }
 for(i=c-1;i>=0;i--)
 {
  printf("%d %s %f\n",p[i]->roll,p[i]->name,p[i]->marks);
 }
}*/
/*void rev_print(ST* ptr)
{
 int i,j,c=count(ptr);
  ST *p1,*p2,temp;
  p1=ptr;
  for(i=0;i<c/2;i++)
   {
     p2=ptr;
    for(j=0;j<c-1-i;j++)
     p2=p2->next;
      memcpy(&temp,p1,sizeof(ST)-4);
      memcpy(p1,&temp,sizeof(ST)-4);
      memcpy(p2,&temp,sizeof(ST)-4);
     p1=p1->next;
  
  } 
}*/
  //array of pointer
/*void rev_link(ST** ptr)
{
  ST *temp=*ptr;
  int i,c=count(*ptr);
  ST  **p=(ST**)malloc(c*sizeof(ST*));
  for(i=0;i<c;i++)
  {
    p[i]=temp;
    temp=temp->next;
  }
    *ptr=p[c-1];
    p[0]->next=0;
    for(i=1;i<c;i++)
    p[i]->next=p[i-1];
}*/ //loops
/*void rev_link(ST** ptr)
{
 ST *q=0,*r;
 while(*ptr!=0)
{
 r=q; 
 q=*ptr;
 *ptr=(*ptr)->next;
 q->next=r;
}
 *ptr=q;
}*/ //recursion
/*void rev_link(ST** ptr)
{
 ST static *q=0,*r;
 if(*ptr!=0)
 {
  r=q;
  q=*ptr;
  *ptr=(*ptr)->next;
  q->next=r;
  rev_link(ptr);
 }
else
 *ptr=q;
}*/
void deleting_all(ST** ptr)
{ 
 int i,c=count(*ptr);
 ST *temp;
 for(i=0;i<c;i++)
 {
  temp=hptr;
  hptr=temp->next;
  free(temp);
 }
} 
  
