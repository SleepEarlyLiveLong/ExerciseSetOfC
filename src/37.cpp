/*
Question 37: Print N-line Yang Hui Triangle 
*/
#include<stdio.h>
#define N 5
int main()
{
	long a[N][N],i,j;//定义变量
	for(i=0;i<=N-1;i++)//对行进行循环
	{
		for(j=1;j<=N-1-i;j++)
		{
			printf(" ");//打出两个空格
		}
		for(j=0;j<=i;j++)
		{
			if(i==j||j==0)//如果是某一行的第一个数或最后一个数，则此数为 1
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];//否则为上一行两个数之和
			}
			printf("%2d ",a[i][j]);//输出数
		}
		printf("\n");//换行
	}
}