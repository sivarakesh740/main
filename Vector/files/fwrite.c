#include<stdio.h>
main()
/*{
FILE *fp;
int x=10;
char ch='a';
float f=22.7;
char a[]="abcdef";
fp=fopen("data.txt","w");
fwrite(&x,sizeof(int),1,fp);
fwrite(&ch,sizeof(char),1,fp);
fwrite(&f,sizeof(float),1,fp);
fwrite(a,sizeof(a),1,fp);
fread(&x,sizeof(int),1,fp);
fread(&ch,sizeof(char),1,fp);
fread(&f,sizeof(float),1,fp);
fread(a,sizeof(a),1,fp);
printf("x=%d\n",x);
printf("ch=%c\n",ch);
printf("f=%f\n",f);
printf("a=%s\n",a);
}*/
/*FILE *fp;
#pragma pack(1)
struct st
{
int x;
char ch;
float f;
char a[20];
}v;//={10,'a',22.7,"abcdef"};
//fp=fopen("data.txt","w");
fp=fopen("data.txt","r");
//fwrite(&v,sizeof(v),1,fp);
fread(&v,sizeof(v),1,fp);
printf("v.x=%d\n",v.x);
printf("v.ch=%c\n",v.ch);
printf("v.f=%f\n",v.f);
printf("v.a=%s\n",v.a);
}*/
{
int x=12345679;
FILE *fp1,*fp2;
fp1=fopen("data.txt1","w");
fp2=fopen("data.txt1","w");
fprintf(fp1,"%d",x);
fwrite(&x,sizeof(int),1,fp1);
printf("%d",sizeof(FILE));
}

