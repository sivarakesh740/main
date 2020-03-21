#include<stdio.h>
main()
{
int maths,physics,computer,social,science;
float total,avg;
printf("maths=");
scanf("%d",&maths);
printf("physics=");
scanf("%d",&physics);
printf("computer=");
scanf("%d",&computer);
printf("social=");
scanf("%d",&social);
printf("science=");
scanf("%d",&science);
total=maths+physics+computer+social+science;
printf("total=%g\n",total);
avg=total/5;
printf("avg=%f\n",total);
}
