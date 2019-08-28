/*
Question 12: One-Dimensional Array Solves the Joseph's Ring-out Problem
*/
#include<stdio.h>
#define N 39
int main()
{
	int a[N]={0},flag=0,m=0,i;
	while(flag<N)
	{
		for(i=0;i<N;i++)
		{
			if(a[i]==0)
				m++;
			if(m==3)
			{
				flag++;m=0;a[i]=flag;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
	return 0;
}