#include"header.c"
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
  
