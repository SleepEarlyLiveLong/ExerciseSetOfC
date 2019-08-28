/*
Question 30: Using Recursive Method to Find the Maximum of a Group of Numbers 
*/
#include<stdio.h>
double Max(double a[],int i)
{
	int c;
	double m;
	c=i;
	if(i==0)
		m=a[0];
	else
	{
		if(Max(a,i-1)>=a[i])
		{
			m=Max(a,i-1);
		}
		else
			m=a[i];
	}
	return m;
}
int main()
{
	double a[10]={.0};
	int i;
	printf("Please input 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
	}
	printf("These numbers are:\n");
	for(i=0;i<10;i++)
	{
		printf("%lf\t",a[i]);
	}
	printf("The biggest number is %lf\n",Max(a,9));
	return 0;
}