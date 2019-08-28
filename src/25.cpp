/*
Question 25: Determine whether the input number satisfies the sum of the four powers of each digit equals itself 
*/
#include<stdio.h>
int FT(int a)
{
	return a*a*a*a;
}
void MGH(long b)
{
	if(FT(b%10)+FT((b/10)%10)+FT((b/100)%10)+FT(b/1000)==b)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
int main()
{
	int c;
	printf("请输入一个四位数:\n");
	scanf("%d",&c);
	MGH(c);
	return 0;
}