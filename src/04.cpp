/*
Question 04: Print the first N terms 1, 1, 2, 3 in the Fibonacci sequence
*/
#include<stdio.h>
int main()
{
	int a=0,b=1,i=1,N;
	printf("Please input a number:\n");
	scanf("%d",&N);
	//printf("0\n");
	for(i=1;i<=N;i++)
	{
		a=a+b;
		b=a-b;
		printf("%d\t",a);
	}
	return 0;
}
