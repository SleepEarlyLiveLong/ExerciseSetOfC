/*
Question 37: Print N-line Yang Hui Triangle 
*/
#include<stdio.h>
#define N 5
int main()
{
	long a[N][N],i,j;//�������
	for(i=0;i<=N-1;i++)//���н���ѭ��
	{
		for(j=1;j<=N-1-i;j++)
		{
			printf(" ");//��������ո�
		}
		for(j=0;j<=i;j++)
		{
			if(i==j||j==0)//�����ĳһ�еĵ�һ���������һ�����������Ϊ 1
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];//����Ϊ��һ��������֮��
			}
			printf("%2d ",a[i][j]);//�����
		}
		printf("\n");//����
	}
}