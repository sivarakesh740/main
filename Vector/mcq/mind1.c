#include<stdio.h>
void main()
{
  int i,j,k=65,n=80,l=75,m=87;
  for(i=1;i<=5;i++)
   {
    for(j=1;j<=5;j++)
     {
        if(i==1)
           printf("*%c",k++);
        else if((i==2)&&(j<4))
           printf("%c*",n++); 
        else if(i==3)
          printf("%c*",l++);
        else if(i==4)
          printf("%c*",m++);
     }
    printf("\n");
   }
}
