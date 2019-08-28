/*
Question 22: Print all pairs of approximations in a range equal to the sum of each other's pairs except for itself 
*/
#include<stdio.h>
int XS(long x)
{
	long sum=0,i;
	for(i=1;i<x;i++)
		if(x%i==0)
		{
			sum+=i;
		}
		return sum;
}
int main()
{
	long a,b,K;
	printf("Please input the upper bonuder:\n");
	scanf("%d",&K);
	for(a=1;a<=K;a++)
	{
		for(b=1;b<=K;b++)
		{
			if(XS(a)==b&&XS(b)==a)
			{
				printf("%d\t%d\n",a,b);
			}
		}
	}
	return 0;
}