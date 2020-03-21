/*int factorial (int fact)
#include<stdio.h>
int main()
{
int n;
printf("enter the number=");
scanf("%d",&n);
printf("fact");
factorial ();
int factorial (int fact) 
while(n)
{
 int n,fact=1;
 n=n%10;
 fact=fact*n;
 n--;
}*/


#include<stdio.h>
void sum(int );
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
sum(n);
return 0;
}
void sum(int n)
{
int s=0,m,z;
while(n!=0)
{
z=s*10+n%10;
n=n/10;
printf("%d",z);
}
}
