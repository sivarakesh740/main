//09-04-2018

#include<stdio.h>
#include<stdlib.h>
void memoryallocate(int ***ptr,int r,int c);
void setdata(int **ptr,int r,int c);
void printdata(int **ptr,int r,int c);
main()
{
int **p,r,c,i,j;
printf("enter the row and coln\n");
scanf("%d %d",&r,&c);

memoryallocate(&p,r,c);
setdata(p,r,c);
printdata(p,r,c);
}

void memoryallocate(int ***ptr,int r,int c)
{
int i,j;
*ptr=(int**)malloc(r*sizeof(int*));
for(i=0;i<r;i++)
(*ptr)[i]=(int*)malloc(c*sizeof(int));
}

void setdata(int **ptr,int r,int c)
{
int i,j;
printf("enter the rows\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&ptr[i] [j]);
}
}

void printdata(int **ptr,int r,int c)
{
int i,j;
printf("printing data\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d",ptr[i] [j]);
printf("\n");
}
}

