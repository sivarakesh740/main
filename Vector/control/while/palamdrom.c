#include<stdio.h>
main()
{
int n,s=0,temp;
printf("enter th number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
//s=s*10;
s=s*10+n%10;
n=n/10;
}
if(s==temp)
printf("palindrome..\n");
else
printf("not a palindrome..\n");
}
