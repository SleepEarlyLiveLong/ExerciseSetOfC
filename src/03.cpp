/*
Question 03: Calculate the sum of the first N terms of 1+3/2+5/3+8/5...
*/
#include<stdio.h>
int main()
{
	int N;
	double sum=.0,i=1.0,m=1.0,n=2.0;
	printf("Please input a number:\n");
	scanf("%d",&N);
	do
	{
		sum=sum+n/m;
		n=m+n;
		m=n-m;
		i++;
	}
	while(i<=N);
	printf("2/1+3/2+5/3+...+%d/%d = %lf\n",long(m),long(n-m),sum);
	return 0;
}
