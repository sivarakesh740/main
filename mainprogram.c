#include<stdio.h>
main()
{
int a[5],i,n,count=0,t,j,big,small;
n=sizeof(a)/sizeof a[i];
printf("enter the data.\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
//printf("display the data..\n");
//for(i=0;i<n;i++)
//{
//printf("%d\n",a[i]);
//if(i%2==0)//oddeven
//++count;
//}
///printf("even=%d\n",count);
//printf("odd=%d\n",n-count);

/*for(j=2;j<a[i];j++)
{
if(a[i]%j==0)//prime number
break;
}
if(j==a[i])
++count;
printf("prime=%d\n",count);
printf("non prime=%d\n",n-count);
}
}*/

/*printf("reverse printf\n");
for(i=n-1;i>=0;i--)//revere printf
printf("%d\n",a[i]);
}*/
/*printf("before reverse\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
for(i=0,j=n-1;i<j;i++,j--)//reverse the array
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("after the reverse .\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}*/


//big=a[0];
small=a[0];
for(i=1;i<n;i++)
{
//if(a[i]>big)//To find biggest number
if(a[i]<small)//to find smallest number
small=a[i];
}
printf("small=%d",small);
}



