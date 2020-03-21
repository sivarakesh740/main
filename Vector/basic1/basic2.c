#include<stdio.h>
main()
{
int salary,dearness,rent,gross;
printf("enter ther salary\n");
scanf("%d",&salary);
dearness=salary/40;
printf("dearness=%d\n",dearness);
rent=salary/20;
printf("rent=%d\n",rent);
gross=salary+(dearness-rent);
printf("gross=%d\n",gross);
}
