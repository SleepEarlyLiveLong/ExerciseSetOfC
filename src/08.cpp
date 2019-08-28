/*
Question 08: Give numbers greater than average in a one-dimensional array
*/
#include<stdio.h>
#define N 10
int main()
{
	float a[N]={0},s=0,ave;
	int i;
	printf("Please input %d numbers:\n",N);
	for(i=0;i<=N-1;i++)
		scanf("%f",&a[i]);
	for(i=0;i<=N-1;i++)
		s+=a[i];
	ave=s/N;
	for(i=0;i<=N-1;i++)
	{
		if(a[i]>=ave)
			printf("a[%d]=%f\n",i,a[i]);
	}
	return 0;
}