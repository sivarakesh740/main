#include<stdio.>
main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("invalid a/.out file\n");
		return;
	}
	int ret;
	FILE *fp;
	fp=fopen(argv[1],"r");
	ret=remove(argv[1]);
	if(ret==0)
	printf("file is succeefully deleted\n");
	else
        printf("file is not deleted\n");

}
