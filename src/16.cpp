/*
Question 16: Find the sum of the diagonal elements of a matrix and the sum of the surrounding elements A
*/
#include<stdio.h>
#define N 3
int main()
{
	int i,j,m[N][N],sum=0,n=N;
	int SUM1=0,SUM2=0,SUM3=0,SUM4=0,SUM5=0,SUM=0;
	for(i=0;i<N;i++)
	{
		printf("line %d: ",i);
		for(j=0;j<N;j++)
		{
			scanf("%d",&m[i][j]);
			if(i==j) sum+=m[i][j];
			if(i+j==N-1) sum+=m[i][j];
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("m[%d][%d]=%d\t",i,j,m[i][j]);
			if(j==4) printf("\n");
		}
	}
	if(n%2)sum-=m[(N-1)/2][(N-1)/2];
	{
		printf("sum=%d\n",sum);
	}
	for(i=0;i<=N-1;i++)
	{
		SUM1+=m[i][0];SUM2+=m[i][N-1];
		SUM3+=m[0][i];SUM4+=m[N-1][i];
		SUM5=m[0][0]+m[0][N-1]+m[N-1][0]+m[N-1][N-1];
	}
	SUM=SUM1+SUM2+SUM3+SUM4-SUM5;
	printf("SUM=%d\n ",SUM);
	return 0;
}
