/*
question 24: Sort the number of inputs from small to large and put them out
*/
#include<stdio.h>
#define n 5
int px(float a[n])
{
	int i,j;
	float tep;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tep=a[j];
				a[j]=a[i];
				a[i]=tep;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%f\n",a[i]);
	}
	return 0;
}
int main()
{
	float a[n]={.0};
	int k;
	printf("plesse input %d numbers:\n",n);
	for(k=0;k<n;k++)
	{
		scanf("%f",&a[k]);
	}
	px(a);
	return 0;
}
