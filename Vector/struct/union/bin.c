#include<stdio.h>
//binary number
/*union u
{
float x;
int y;
};
int main()
{
union u v={22.7};
int i;
for(i=31;i>=0;i--)
printf("%d",v.y>>i&1);
printf("\n");
}*/
//little endian
union u
{
int x;
char ch;
}v={1};
int main()
{
if(v.ch==1)
printf("little endian\n");
else
printf("big endian\n");
} 
