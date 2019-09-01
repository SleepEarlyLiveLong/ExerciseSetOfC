/*
Question 34: Sort by direct insertion sorting method
*/
#include<stdio.h>
void Insert(int x,int a[],int len) //定义插入函数
{
	a[len+1]=x;
}
void Sort(int a[],int len) //定义排序函数
{
	int b[10],i,j,m,temp; //排序之前的数组
	printf("please input ten numbers:");
	for(i=0;i<=9;i++)
		scanf("%d",&b[i]);
	//每插入一个数即排序
	a[0]=b[0];
	for(i=1;i<=9;i++)
	{
		Insert(b[i],a,i-1);
		for(j=0;j<i;j++)
		{
			for(m=j+1;m<i+1;m++)
				if(a[m]<a[j])
				{
					temp=a[m];
					a[m]=a[j];
					a[j]=temp;
				}
		}
	}
	//打印排序之后的数组
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
}
//主函数
int main(void)
{
	int a[10];
	Sort(a,10);
	return 0;
}
