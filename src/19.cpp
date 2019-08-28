/*
Question 19: Screen out strings from I to N in a string 
*/
#include<stdio.h>
void main()
{
	int i,n,count=1;
	char x[100];
	printf("请输入字符串:\n");
	gets(x);
	printf("请输入 i 和 n 的值\n");
	scanf("%d%d",&i,&n);
	while(count<=n)
	{
		printf("%c",x[i-1]);
		i++;
		count++;
	}
	printf("\n");
}