#include<stdio.h>
main()
{
/*char a[10]={'a','b','c','d'};
char b[10]="abcd";
printf("%d %d\n",sizeof(a),sizeof(b));
}*/

/*char a[10]="abcd";
printf("%s\n",a);
}*/

/*char a[10];
printf("enter the string..\n");
scanf("%s",a);
printf("string is=%s\n",a);
}*/
/*int i;
char a[0];
printf("enter the string ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
printf("%c\n",a[i]);
}*/



char a[50];
int i,j,k;
printf("enter the string\n");
scanf("%s",a);
for(i=0;a[i];i++)
{
  for(j=i+1;a[j];j++)
   {
  if(a[i]==a[j])
{
   for(k=j;a[k];k++)
   
    a[k]=a[k+1];
  
   j--;
}
  }

}

printf("after the operation:%s",a);
}










