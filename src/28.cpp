/*
Question 28: Print out the N-th item of Fibonacci sequence by recursive method 
*/
#include<stdio.h>
long int fib(int n);

int main()
{
	int f,n;
	printf("������쳲��������е���;\n");
	scanf("%d",&n);
	f=fib(n);
	printf("��%d ���ֵ��%d\n",n,f);
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