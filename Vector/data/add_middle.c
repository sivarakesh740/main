#include<header.h>
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
