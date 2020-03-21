#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
int roll;
char name[20];
float marks;
struct student *next;
}ST;
void add_end(ST**);
void print(ST*);
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
}
void add_end(ST**ptr)
{
  ST *temp;
  temp=(ST*)malloc(sizeof(ST));
  printf("enter the roll,name,marks\n");
  scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
 
  if(*ptr==0)
  { 
    temp->next=*ptr;
    *ptr=temp;
  }
  else
  {
    ST *last=*ptr;
   while(last->next!=0)
   last=last->next;
   temp->next=last->next;
   last->next=temp;
  }
}
void print(ST *ptr)
{
  while(ptr!=0)
  {
   printf("%d %s %f",ptr->roll,ptr->name,ptr->marks);
   ptr=ptr->next;
  }
}  
