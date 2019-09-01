/*
Question 14: Calculate encryption of X, right shift the residues of X+5 THREE bits and reverse its order
*/
#include<stdio.h>
int main()
{
	int a[16]={0},b[8]={0},i;
	printf("Please input 8 numbers Enter As Pause:\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
		a[i]=(a[i]+5)%10;
	}
	for(i=11;i<16;i++)
	{
		a[i]=a[i-11];
	}
	for(i=8;i<11;i++)
	{
		a[i]=a[i-3];
	}
	for(i=8;i<16;i++)
	{
		b[15-i]=a[i];
	}
	printf("The coded numbers are:\n");
	for(i=0;i<8;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
