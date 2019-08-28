/*
Question 28: Print out the N-th item of Fibonacci sequence by recursive method 
*/
#include<stdio.h>
long int fib(int n);

int main()
{
	int f,n;
	printf("请输入斐波那契数列的项;\n");
	scanf("%d",&n);
	f=fib(n);
	printf("第%d 项的值是%d\n",n,f);
}
long int fib(int n)
{
	long f;
	if(n==1)
		f=0;
	else if(n==2)
		f=1;
	else
		f=fib(n-1)+fib(n-2);
	return f;
}