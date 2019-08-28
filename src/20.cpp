/*
Question 20: Call the function to find all cubes and three digits for itself 
*/
#include<stdio.h>
int cube(int x)
{
	int z;
	z=x*x*x;
	return z;
}
int main()
{
	int x;
	for(x=100;x<=999;x++)
	{
		if(cube(x%10)+cube((x/10)%10)+cube(x/100)==x)
			printf("%d\t",x);
	}
}