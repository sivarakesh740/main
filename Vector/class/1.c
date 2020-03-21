//29-08-2018

#include<stdio.h>
#include<string.h>
/*int fun(int(*fp)(int,int),int x,int y);
int sum(int a,int b);
main()
{
int x=10,y=20,z;
z=fun(sum,x,y);
printf("z=%d\n",z);
}
int fun(int(*fp)(int,int),int x,int y)
{
printf("fun function\n");
return fp(x,y);
}
int sum(int a,int b)
{
printf("sum function\n");
return a+b;
}*/

/*main(int argc,char*argv[])
{
char ch;
printf("ch=%c\n",ch);
}*/

int main(int argc,char**argv)
{
if(argc !=2)
{
printf("usage:./a.out int\n");
return;
}
int x;
 x=my_atoi(argv[1]);
printf("%d\n",x);
}
int my_atoi(char *p)
{
int sum=0,i;
for(i=0;p[i];i++)
sum=sum*10+(p[i]-48);
return sum;
}



