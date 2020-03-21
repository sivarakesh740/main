#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
/*int *p=(int *)malloc(5*sizeof(int));
int i;
for(i=0;i<5;i++)
p[i]=i+21;
for(i=0;i<5;i++)
printf("p[%d]=%d\n",i,p[i]);
}*/

/*char *p=(char *)malloc(20*sizeof(char));
strcpy(p,"vector");
*p='v';//valid
p="vector";//invalid
printf("p=%s\n",p);
}*/


/*char *p[4];
int i;
for(i=0;i<4;i++)
p[i]=(char*)malloc(20*sizeof(char*));
printf("enter the 4 string\n");
for(i=0;i<4;i++)
scanf("%s",p[i]);
for(i=0;i<4;i++)
printf("p[%d]=%s\n",i,p[i]);
}*/

int i,n;
printf("enter the n value\n");
scanf("%d",&n);
char **p=(char**)malloc(n*sizeof(char*));
for(i=0;i<n;i++)
p[i]=(char*)malloc(n*sizeof(char));
printf("enter the string\n");
for(i=0;i<n;i++)
scanf("%s",p[i]);
for(i=0;i<n;i++)
printf("p[%d]=%s\n",i,p[i]);
}
