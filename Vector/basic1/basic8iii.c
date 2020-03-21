#include<stdio.h>
main()
{
float x,y,z;
printf("enter the x=");
scanf("%f",&x);
printf("enter the y=");
scanf("%f",&y);
z=((3*x+4*y)*(2*x-3)/(x-y)/(x+y)*(2*x+3));
printf("z=%f",z);
}
