/*
Question 21: Print the sum of all approximations except itself in a certain range equal to all of its own
*/
#include<stdio.h>
int WB(int n)
{
	int sum=0,i,c=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		c=n;
	}
	return c;
}
int main()
{
	int z,j=1,U;
	printf("Please input the upper bound:\n");
	scanf("%d",&U);
	for(j=1;j<=U;j++)
	{
		z=WB(j);
		if(z!=0)
			printf("%d\n",z);
	}
	return 0;
}