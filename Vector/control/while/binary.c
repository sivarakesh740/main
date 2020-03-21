#include<stdio.h>
main()
{
int n,i=31; //i=sizeof(int)*8-1;
printf("enter the number=");
scanf("%d",&n);
while(i>=0)
{
printf("%d",n>>i&1);
i--;
}
}
