#include<stdio.h>
main()
{
/*int sub[50],i;
for(i=0;i<=48;i++)
{
 sub[i]=i;//ass1 
printf("%d\n",sub[i]);
}
}*/

/*char c[5]="Abcder";//ass2
printf("%c\n",c[0]);
printf("%s\n",c);
}*/

/*int a[5]={5,1,15,20,25};
int i,j,k,l,m;
i=++a[1];
j=a[1]++;//ass3
m=a[i++];
printf("%d %d %d\n",i,j,m);
}*/

/*int a[10]={1,2,3,4,5,6,7,8,9,10};
int i,x=10,temp=0;
for(i=0;i<x;i++)
{
 temp=a[i];
 a[i]=a[x-i-1];//ass14
 a[x-i-1]=temp;
}
for(i=0;i<x;i++)
printf("%d\n",a[i]);
}*/

char *str1="abcd";
char str2[]="abcd";
char str3[10]="vector";
printf("%d %d %d %d\n",sizeof(str1),sizeof(str2),sizeof(str3),sizeof("abcd"));
}
