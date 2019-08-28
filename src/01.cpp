/*
Question 01: Finding the sum of the N-th power of sequence 2
*/
#include<stdio.h>
#include<math.h>
int main()
{
	long i = 0,n,s = 0;
	printf("please input a number:\n");
	scanf("%d",&n);
	do
	{
		s = pow(2.0,i)+s;
		i++;
	}
	while(i <= n);
	printf("2^0+...2^%d = %d\n",n,s);
	return 0;
}