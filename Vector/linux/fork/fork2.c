#include<stdio.h>
main()
{
	if(fork()==0)
	{ 
		printf("child1:pid-%d ppid-%d\n",getpid(),getppid());
	}
	else 
	{
		if(fork()==0) 
		{
			printf("child2:pid-%d ppid-%d\n",getpid(),getppid());
		}
		else
		{
			if(fork()==0) 
			{
				printf("child2:pid-%d ppid-%d\n",getpid(),getppid());
			}
			else
			{
				while(1);
			}
		} 
	}
}
