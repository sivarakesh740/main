#define prod(a,b)a*b
#include<stdio.h>
main()
{
//book1
/*char s[]={'a','b','c','\n','c','\0'};
char *p,*str,*str1;
p=&s[3];
str=p;
str1=s;
printf("%d",++*p + ++*str1-32);
}*/

/*char str[]="abcdefghijklomp";
int *p,i;//book2
p=str;
for(i=0;i<4;i++)
{
printf("%c",*p++);
}
}*/

/*int a[10];//book3
printf("%u %u",a+1,&a+1);
}*/

/*int arr[]={10,20,36,72,87,20};
int *j,*k;//book4
j=&arr[4];
k=(arr+4);
if(j==k)
printf("\ntwo pointer point to same locatio");
else
printf("\ntwo pointer do not point to same locatio");
}*/

/*int a[5]={5,1,10,20,25};
int i,j,k,l,m;
i=++a[1];//book5
j=a[i]++;
m=a[i++];
//l=a[1];
printf("\n%d %d %d %d",i,j,m,l);
}*/

/*char s[]="hello";
int i=0;           //book6
while(s[i]!='\0')
{
printf("%c %c\n",s[i],*(i+s));
i++;
}
}*/

/*int n[2][2]={{1,2},{4,5}};
int i,j;
for(i=0;i<2;i++)//book7
for(j=0;j<2;j++)
printf("%d",*(*(n+i)+j));
}*/

/*int arr[]={0,1,2,3,4};
int *ptr; book8
for(ptr=arr+4;ptr>=arr;ptr--)
printf("%d",arr[ptr-arr]);
}*/


/*int arr[]={0,1,2,3,4};
printf("%d %d %d\n",sizeof(arr),sizeof(*arr),sizeof(arr[0]));
}*/

/*int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
printf("%u %u %u\n",a[0]+1,*(a[0]+1),(*(a+0)+1));
}*/

int x=3,y=4;
printf("%d",prod(x+2,y-1));
}



