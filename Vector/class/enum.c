#include<stdio.h>
/*main()
{
enum e{sun,mon,tue,wed,thu,fri,sat}day;
printf("%d %d %d %d\n",sun,wed,fri,sat);
}*/
/*main()
{
enum e{sun,mon,tue,wed,thu,fri,sat}day;
printf("%d %d %d %d\n",sun,wed,fri,sat);
tue=3;//invalid
}*/
/*main()
{
enum e{sun,mon,tue,wed,thu,fri,sat}day;
day=wen;
if(day==sun)
printf("holidays\n");
if(day==sat)
printf("half working day\n");
else
printf(" working day\n");
}*/
/*int main()
{
enum {red=1,blue,yellow,pink=6,white};
enum {black,white,green};//invalid
printf("%d %d %d %d\n",red,black,white,yellow);
}*/

/*enum {red=1,blue,yellow,pink=6,white};
int main()
{
enum {black,white,green};//valid
printf("%d %d %d %d\n",red,black,white,yellow);
}*/

int main()
{
enum e {sun,mon,tue,wed,++thu,fri}day;//invalid
enum e {sun,mon,tue,wed,thu,fri}day;//valid
printf("%d\n",sizeof(wed));//4 valid
printf("%d\n",sizeof(enum e));//4 valid
++sun;//invalid
--thu;//invalid
}
}
