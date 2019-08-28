/*
Question 02: Finding the sum of the first N factorial
*/
#include<stdio.h.>
int main()
{
	long x,s=1,i=1,ss,sss=1;
	printf("please input a number:\n");
	scanf("%d",&x);
	while(i<=x)
	{
		ss=sss;
		s=s*i;
		i++;
		sss+=s;
	}
	printf("1!+...%d!=%d\n",i-1,sss-1);
	return 0;
}