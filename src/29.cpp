/*
Question 29: Using Recursive Method to Calculate the Product of Input Numbers 
*/
#include<stdio.h>
double XJ(double a[],int n)
{
	double s=1.0;
	if(n==0)
		s=a[0];
	else
		s=XJ(a,n-1)*a[n];
	return s;
}
int main()
{
	double a[5]={.0};
	int i;
	double z;
	printf("Please input 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%lf",&a[i]);
	}
	printf("These 5 numbers are:\n");
	for(i=0;i<5;i++)
	{
		printf("%lf\n",a[i]);
	}
	z=XJ(a,4);
	printf("The answer is:%lf\n",z);
}