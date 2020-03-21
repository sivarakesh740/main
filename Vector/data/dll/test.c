#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
  struct student *prv;
  int roll;
  char name[34];
  float mark;
  struct student *next;
}ST;


void add_begin(ST **);
void display(ST *);
 

int main()
{
  ST *hptr=0;
  char ch;
  do
  {
    add_begin(&hptr);
    printf("enter the next student detail\n");
    scanf(" %c",&ch);
  }while((ch=='y') || (ch=='Y'));
 
  display(hptr);
}
 

void add_begin(ST **ptr)
{
   ST *temp;
   temp=(ST*)malloc(sizeof(ST));
   printf("enter the student mark\n");
   scanf("%d%s%f",&temp->roll,temp->name,&temp->mark);
   
   temp->prv=0;
   temp->next=*ptr;
   if(*ptr!=0)
   (*ptr)->prv=temp;
   *ptr=temp;
}


void display(ST *ptr)
{
   while(ptr->next!=0)
   {
   //  printf("display the student mark\n");
    // printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
     ptr=ptr->next;
   }
   
   while(ptr!=0)
   {
      printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
      ptr=ptr->prv;
   }
}

