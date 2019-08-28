/*
Question 13: Number of words counted, initial letter capitalized
*/
#include<stdio.h>
void main()
{
	char s[50],c;
	int i,num=0,j=0;
	printf("请输入一行英文：\n");
	gets(s);
	for(i=0;(c=s[i])!='\0'&&i<50;i++)
	{
		if(c==' ')
			j=0;
		else if (j==0)
		{
			j=1;
			s[i]=c-32;
			num++;
		}
	}
	printf ("共有%d 个单词: \n",num);
	printf("改写后的英文文本为: \n%s\n",s);
}