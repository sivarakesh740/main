int fun();
#include<stdio.h>
/*main()
{
int num,ret;
printf("enter the number\n");
scanf("%d",&num);
ret=fact(num);
printf("ret=%d\n",ret);
}
int fact(int n)
{
 int i,f=1;
 for(i=1;i<=n;i++)
 {
 f=f*i;
 }
return f;
}*/


int main()
{
/*printf("in main function\n");
printf("before fun function\n");
 int res=fun();
printf("in main function\n");
printf("res=%d\n",res);
}

int fun()
{
printf("in fun funcion\n");
printf("hello\n");
return 10;
printf("hai\n");
}*/
int ret;
ret=fun3();
printf("in main:ret=%d\n",ret);
}
int fun1()
{
int x=10;
printf("in fun1()..\n");
return x+fun2();
printf("hello\n");
}
int fun2()
{
int y=20;
printf("in fun2()..\n");
return y*fun3();
printf("hello\n");
}
int fun3()
{
int z=5;
printf("in fun3()..\n");
return z;
printf("hello\n");
}


