#include<stdio.h>
main()
{
int n1,n2,res;
printf("enter n1  number=");
scanf("%d",&n1);
printf("enter n2 number=");
scanf("%d",&n2);
for(res=n2;res<n1;res=res*n2);
//for(res=n2;res<=n1;res=res*n2)
//{
if(res==n1)
printf("%d is power of %d\n",n1,n2);
else
printf("%d is not power of 2%d\n",n1,n2);
//}
}
