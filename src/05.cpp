/*
Question 05: Print all prime numbers from 1 to N
*/
#include<stdio.h>
int main()
{
	unsigned long number,i,N;
	printf("Please input a number:\n");
	scanf("%d",&N);
	printf("1-%d 的所有素数是:\n",N);
	printf("2\t");
	for(number=3;number<=N;number++)
	{
		for(i=2;i<=number-1;i++)
		{
			if(number%i==0)
				break;
		}
		if(i>=number)
			printf("%d\t",number);
	}
	printf("\n");
	return 0;
}