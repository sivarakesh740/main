#include<stdio.h>
void binary (int num);
main()
{
int n1,n2,res;
printf("enter the number\n");
scanf("%d %d",&n1,&n2);
printf(" n1 binary..\n");
binary(n1);
printf("n2 binary..\n");
binary(n2);
res=n1|n2;
printf("res binary..\n");
binary(res);
}
void binary(int num)
{ 
 int i;
 for(i=31;i>=0;i--)
 printf("%d",num>>i&1);
 printf("\n");
}

