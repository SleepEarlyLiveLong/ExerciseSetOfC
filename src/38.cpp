/*
Question 38: Identify the number of words in the English text and change the initial letter not capitalized to capitalized. 
*/
#include<stdio.h>
void main()
{
	char s[50],c;
	int i,num=0,j=0;
	printf("������һ��Ӣ��:\n");
	gets(s);
	for(i=0;(c=s[i])!='\0'&&i<50;i++)
	{
		if(c==' ')
			j=0;
		else if (j==0)
		{
			j=1;
			if(c>=97&&c<=122)
			{
				s[i]=c-32;
			}
			else
				s[i]=c;
			num++;
		}
	}
	printf ("����%d ������:\n",num);
	printf("��д���Ӣ���ı�Ϊ:%s\n",s);
} 