/*
Question 26: Calculate the minimum common multiple of the number of N inputs
*/
#include<stdio.h>
long ZXGB(long a,long b);

#define N 10
int main()
{
	int a[N-1]={0},i;
	printf("请输入%d 个整数:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<N;i++)
	{
		a[i]=ZXGB(a[i-1],a[i]);
	}
	printf("这%d 个整数的最小公倍数是:%d",N,a[N-1]);
}
long ZXGB(long a,long b)
{
	int z,c;
	c=a;
	if(b>a)
		c=b;
	for(z=c;z%a+z%b!=0;z++);
	return z;
}