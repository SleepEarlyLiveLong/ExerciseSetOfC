/*
Question 10: Arrays are sorted from small to large, printing the largest number, the next largest number, the number of times the largest number occurs
*/
#include<stdio.h>
#define N 6
int main()
{
	int a[N],i,j,k,n=1,sec;
	printf("请输入任意%d 个整数:\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<=N-1;i++)
	{
		for(j=i+1;j<N;j++)
			if(a[j]<a[i])
			{
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
	}
	printf("按由小到大输出的%d 个整数是：\n",N);
	for(i=0;i<N;i++)
		printf("%d,",a[i]);
	printf("\n");
	printf("the biggest number is:%d\n",a[N-1]);
	for(i=N-1;i>0;i--)
	{
		if(a[i-1]==a[i])
			n++;
	}
	sec=a[N-n-1];
	printf("the second biggest number is:%d\n",sec);
	printf("times is:%d\n",n);
	return 0;
}