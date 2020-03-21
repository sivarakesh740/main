#include"header.c"
int main()
{
 ST *hptr=0;
 char ch;
 do{
 add_begin(&hptr);
 printf("do you want enter the charater\n");
 scanf(" %c",&ch);
 }while((ch=='y') ||(ch=='Y'));
 print(hptr); 
 int x=count(hptr);
 //printf("%d\n",x); 
  save(hptr);
}
  
