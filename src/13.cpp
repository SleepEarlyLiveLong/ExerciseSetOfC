/*
Question 13: Number of words counted, initial letter capitalized
*/
#include<stdio.h>
void main()
{
	char s[50],c;
	int i,num=0,j=0;
	printf("������һ��Ӣ�ģ�\n");
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
	printf ("����%d ������: \n",num);
	printf("��д���Ӣ���ı�Ϊ: \n%s\n",s);
}