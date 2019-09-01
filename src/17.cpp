/*
Question 17: Two-dimension matrix multiplication
*/
#include<stdio.h>
#define N 4
int main()
{
	int a[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}},
		b[4][3]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}},
		c[3][3]={0},i=1,j=i,m=0;
	for(i=0;i<N-1;i++)
	{
		for(m=0;m<N-1;m++)
		{
			for(j=0;j<N;j++)
			{
				c[i][m]+=a[i][j]*b[j][m];//ºËÐÄ²½Öè
			}
		}
	}
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1;j++)
		{
			printf("c[%d][%d]=%d\n",i,j,c[i][j]);
		}
	}
	return 0;
}
