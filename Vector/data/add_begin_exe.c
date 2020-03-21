#include<stdio.h>
#include<stdlib.h>
struct st
{
 struct st *prv;
 int roll;
 char a[100];
 float marks;
 struct st *next;
};
void add_begin(struct st **ptr);
void add_end(struct st **ptr);
void print(struct st *ptr);
void rev_print(struct st *ptr);
void cout(struct st *ptr);
void delete(struct st **ptr);
void rev_link(struct st **ptr);
void save(struct st *ptr);
int main()
{
  struct st *hptr=0;
  char ch;
  do
  { 
    add_begin(&hptr);
     // add_end(&hptr);
     printf("do want the value\n");
     scanf(" %c",&ch);
  }while((ch=='y') || (ch=='Y'));
 // print(hptr);
  save(hptr);
 // rev_print(hptr);
  int r=count(hptr);
  printf("%d\n",r);
  delete(&hptr);
  rev_link(&hptr);
  print(hptr);
}
/*void add_begin(struct st **ptr)
{
  
   struct st *temp=(struct st*)malloc(sizeof(struct st));
   printf("enter the student detail\n");
   scanf("%d %s %f",&temp->roll,temp->a,&temp->marks);
   temp->next=*ptr;
   *ptr=temp;
}*/
void print(struct st *ptr)
{  
   while(ptr!=0)  
   { 
     printf("%d %s %f\n",ptr->roll,ptr->a,ptr->marks);
     ptr=ptr->next;
   }
}
int count(struct st *ptr)
{
  int c=0;
  while(ptr!=0)
  {
     c++;
    ptr=ptr->next;
  }
  return c;
}
void rev_print(struct st *ptr)
{
   if(ptr!=0) 
   {
       rev_print(ptr->next);
       printf("%d %s %f\n",ptr->roll,ptr->a,ptr->marks);
     }
}
void delete(struct st **ptr)
{
 struct st *temp;
  while(*ptr!=0)
  { 
    temp=*ptr;
    *ptr=(*ptr)->next;
    free(temp);
  }
}
void rev_link(struct st **ptr)
{
  struct st *q=0,*r;
  while(*ptr!=0)
  {
     r=q;
     q=*ptr; 
     *ptr=(*ptr)->next;
     q->next=r;
  }
   *ptr=q;
}
void add_end(struct st **ptr)
{
  
   struct st *temp=(struct st*)malloc(sizeof(struct st));
   printf("enter the student detail\n");
   scanf("%d %s %f",&temp->roll,temp->a,&temp->marks);
   if(*ptr==0)
   {
     temp->next=*ptr;
      *ptr=temp;
   }
   else
   {
      struct st *last=*ptr;
      while(last->next!=0)
      last=last->next;
      temp->next=last->next;
      last->next=temp;
   }
}
void save(struct st *ptr)
{
  FILE *fp=fopen("2.txt","w");
  while(ptr!=0)
  {
      fprintf(fp,"%d %s %f\n",ptr->roll,ptr->a,ptr->marks);
      ptr=ptr->next;
  }
}
void add_begin(struct st **ptr)
{
 struct st *temp=(struct st*)malloc(sizeof(struct st));
 printf("enter the student list\n");
 scanf("%d %s %f",&temp->roll,temp->a,&temp->marks); 
 temp->prv=0; 
 temp->next=*ptr;
 if(*ptr!=0) 
 (*ptr)->next=temp; 
 *ptr=temp;
}
void add_end(struct st *ptr)
{ 
  struct st *temp=(struct st*)malloc(sizeof(struct st));
  printf("enter the student list\n");
  scanf("%d %s %f",&temp->roll,temp->a,&temp->marks); 
  if(*ptr==0)
  {
     temp->prv=0;
     temp->next=0;
     *ptr=temp;
  }
  else
  {
     struct st *last=*ptr;
     while(last->next!=0)
     last=last->next;
     temp->prv=last;
     temp->next=last->next;
     last->next=temp; 
  }
}
