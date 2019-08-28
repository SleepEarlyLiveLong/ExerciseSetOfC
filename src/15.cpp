/*
Question 15: Decrypt the previous question
*/
#include<stdio.h>
int main(void)
{
	int a[20]={0},i,j;
	printf("please put in password(8words,every word use Enter as a pause)\n");
	for(i=1;i<=8;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=4;i++)
	{
		j=a[i];
		a[i]=a[8-i+1];
		a[8-i+1]=j;
	}
	for(i=1;i<=8;i++)
		a[i+9]=a[i];
	for(i=10;i<=12;i++)
		a[i+8]=a[i];
	for(i=12;i<=20;i++)
		a[i-12]=a[i];
	for(i=1;i<=8;i++)
	{
		if(a[i]<=4)
			a[i]=a[i]+5;
		else
			a[i]=a[i]-5;
	}
	printf("the changed password is:");
	for(i=1;i<=8;i++)
		printf("%d",a[i]);
	return 0;
}