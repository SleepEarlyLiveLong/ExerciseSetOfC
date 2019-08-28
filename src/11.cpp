/*
Question 11: Put out the first k terms of Fibonacci sequence and calculate their sum
*/
#include<stdio.h>
int main()
{
	int m=1,n=1,p,i,k,sum=0;
	printf("%d\n%d\n", m,n);
	i=3;
	printf("please input a number:\n");
	scanf("%d",&k);
	do{
		p=m+n;
		sum+=p;
		printf("%d\n",p);
		m=n;
		n=p;
		i=i+1;
	}while(i<=k);
	printf("\nsum=%d\n",sum);
}