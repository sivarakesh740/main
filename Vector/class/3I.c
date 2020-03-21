//31-09-2018

#include<stdio.h>
#include<stdarg.h>
void print(char*s);
int my_printf(const char*,...);
int main()
{
	int x=10,y=20;
	char ch='A';
	float f=22.7;
	char str[20]="vector india";
	my_printf("hello\n");
	my_printf("x=%d y=%d\n",x,y);
	my_printf("x=%d ch=%c f=%f str=%s\n",x,ch,f,str);
	int r=my_printf("vector india");
	my_printf("r=%d\n",r);
}
int c=0;
int my_printf(const char*p,...)
{
	int i,ret;
	char str[20];
	double d;
	va_list ap;
	va_start(ap,p);
	c=0;
	for(i=0;p[i];i++)
	{
		if(p[i]=='%')
		{
			i++;
			if(p[i]=='d')
			{
				ret=va_arg(ap,int);
				sprintf(str,"%d",ret);
				print(str);
			}
			else if(p[i]=='c')
			{
				ret=va_arg(ap,int);
				sprintf(str,"%c",ret);
				print(str);
			}
			else if(p[i]=='f')
			{
				d=va_arg(ap,double);
				sprintf(str,"%f",d);
				print(str);
			}
			else if(p[i]=='s')
			{
				char*s=va_arg(ap,char*);
				sprintf(str,"%s",s);
				print(str);
			}
		}
		else
		{
			putchar(p[i]);
			c++;
		}
	}
	return c;
}
void print(char *s)
{
	int i;
	for(i=0;s[i];i++)
	{
		putchar(s[i]);
		c++;
	}
}
