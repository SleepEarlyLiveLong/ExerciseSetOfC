/*
Question 34: Sorting by Direct Insertion Sorting 
*/
#include<stdio.h>
void Insert(int x,int a[],int len) //������뺯��
{
	a[len+1]=x;
}
void Sort(int a[],int len) //����������
{
	int b[10],i,j,m,temp; //����֮ǰ������
	printf("please input ten numbers:");
	for(i=0;i<=9;i++)
		scanf("%d",&b[i]);
	//ÿ����һ����������
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
	//��ӡ����֮�������
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
}
//������
int main(void)
{
	int a[10];
	Sort(a,10);
	return 0;
}