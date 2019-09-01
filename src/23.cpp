/*
Question 23: Determine whether the number entered is prime
*/
#include<stdio.h>
void SS(long a)
{
	long i,sum=0;
	for(i=2;i<a;i++)
	{
		if(a%i!=0)
		{
			sum++;
		}
	}
	if(sum==a-2)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
long main()
{
	int x;
	printf("ÇëÊäÈëÒ»¸öÕûÊý:\n");
	scanf("%d",&x);
	if(x<2)
		printf("No\n");
	else if(x==2)
		printf("Yes\n");
	else if(x>2)
		SS(x);
	return 0;
}
