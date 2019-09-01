/*
Question 31: Use recursive method and Taylor Formula to calculate e^x
*/
#include<stdio.h>
double XS(double x,int b);
int main()
{
	double x;
	printf("Please input the number x:\n");
	scanf("%lf",&x);
	XS(x,30);
	return 0;
}
double XS(double x,int b)
{
	double s=1.0,t=1.0;
	int i=1;
	for(i=1;i<=b;i++)
	{
		t=t*x/i;
		s+=t;
	}
	printf("e^%lf is about %lf\n",x,s);
	return s;
}
