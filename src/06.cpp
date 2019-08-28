/*
Question 06: Print all four-digit numbers ABCD where (AB+CD)^2 = ABCD
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b;
	for(x=1000;x<=9999;x++)
	{
		a=x/100;
		b=x-100*a;
		if(x == pow(double(a+b),2))
			printf("%d\n",x);
	}
	return 0;
}