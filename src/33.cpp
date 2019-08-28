/*
Question 33: Finding the Root of Function F(x)=x^3-5x^2-10x+16 by Chord Division Method 
*/
#include<stdio.h>
double f(double x)
{
	double a;
	a=x*x*x-5*x*x+16*x-80;
	return a;
}
void QG(double x1,double x2)
{
	double x;
	do
	{x=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
	if(f(x)*f(x1)>=0)
		x1=x;
	else
		x2=x;
	}while(f(x)<(1/(1000000)));
	printf("the result is:%lf\n",x);
}
int main(void)
{
	QG(0.0,10.0);
	return 0;
}