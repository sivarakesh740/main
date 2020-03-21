#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
  int roll;
  char name[30];
  float marks;
  struct student *next;
}ST;
   void add_begin(ST**);
   void print(ST*);
int main()
{
 char ch;
 ST *hptr=0;
 do{
 add_begin(&hptr);
 printf("do you continue (y/n)\n");
 scanf(" %c",&ch);
 }while((ch=='y')||(ch=='Y'));
 print(hptr);
}
void add_begin(ST **ptr)
{
 ST *temp;
 temp=(ST*)malloc(sizeof(ST));
 printf("do you want contiune\n");
 scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
 temp->next=*ptr;
 *ptr=temp;
}
void print(ST *ptr)
{
 while(ptr!=0)
 {
  printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
  ptr=ptr->next;
 }
}

