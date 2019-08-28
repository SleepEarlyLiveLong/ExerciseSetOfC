/*
Question 14: Encryption, add 5, take 10 residues, move right to three places in reverse order 
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