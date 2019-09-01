/*
Question 32: Exchange two input numbers
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please input 2 numbers:\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After exchanging,the numbers turned into:\n%d\n%d\n",a,b);
	return 0;
}
