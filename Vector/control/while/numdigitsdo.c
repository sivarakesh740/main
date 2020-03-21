#include<stdio.h>
main()
{
int n,i=31; //fact=1;//temp,s=0;
printf("enter the number=");
scanf("%d",&n);
//temp=n;
do
{
//s=s*10+n%10;
--i;
printf("%d",n>>i&1);
}while(i>=1);
//printf("%d",n>>i&1);
//printf("fact=%d",fact);
//if(s==n)
//printf("palamdrome\n");
//else
//printf("not an palamdrome\n");
}
