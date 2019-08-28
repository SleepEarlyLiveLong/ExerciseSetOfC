/*
Question 09: Insert a number without changing the order of the original array from large (small) to small (large) 
*/
#include<stdio.h>
#define N 11
int main()
{
	int s,t;
	double x,a[N];
	printf("Please input 10 numbers from big to small:\n");
	for(s=0;s<=N-2;s++)
		scanf("%lf",&a[s]);
	printf("Please input the number you want to insert:\n");
	scanf("%lf",&x);
	for(s=0,t=10;s<=N-2;s++)
		if(x>/*此处>或<起决定作用*/a[s])
		{
			t=s;
			break;
		}
		for(s=N-1;s>t;s--)
			a[s]=a[s-1];
		a[t]=x;
		printf("\nthe answer is:\n",a[s]);
		for(s=0;s<=N-1;s++)
			printf("%lf\n",a[s]);
		printf("\n");
		return 0;
}