/*
Question 25: Determine whether the input number ABCD satisfies A^4 + B^4 + C^4 + D^4 = ABCD
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
	printf("ÇëÊäÈëÒ»¸öËÄÎ»Êý:\n");
	scanf("%d",&c);
	MGH(c);
	return 0;
}
