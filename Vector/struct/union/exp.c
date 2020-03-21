#include<stdio.h>
union u
{
int x;
float y;
};
int main()
{
printf("sizeof=%d\n",sizeof(union u));
union u v={22.7};
printf("v.x=%d,v.y=%f\n",v.x,v.y);
v.y=20;
printf("v.x=%d,v.y=%f\n",v.x,v.y);
}
