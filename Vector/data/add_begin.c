#include"header.c"
void add_begin(ST **ptr)
{
 ST *temp;
 temp=(ST*)malloc(sizeof(ST));
 printf("enter the roll,name,marks\n");
 scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
 temp->next=*ptr;
 *ptr=temp;
}
