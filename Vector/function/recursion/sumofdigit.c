#include<stdio.h>
#include<string.h>
int sumofdigits(int );
main()
{
int num;
printf("enter the mnumber\n");
scanf("%d",&num);
int res=sumofdigits(num);
printf("%d sumofdigits=%d\n",num,res);
}
int sumofdigits(int n)
{
static s=0;
if(n>0)
{
s=s+n%10;
n=n/10;
return sumofdigits(n);
}
else 
return s;
}
