/*
Question 36: What's the date of one certain day of 2014? 
*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("请输入一个三位数(1-365)\n");
	scanf("%d",&a);
	b=(a<=31)+(a<=59)+(a<=90)+(a<=120)+(a<=151)+(a<=181)+(a<=212)+(a<=243)+(
		a<=273)+(a<=304)+(a<=334)+(a<=365);
	b=13-b;
	switch(b)
	{
	case 1:c=a;break;
	case 2:c=a-31;break;
	case 3:c=a-59;break;
	case 4:c=a-90;break;
	case 5:c=a-120;break;
	case 6:c=a-151;break;
	case 7:c=a-181;break;
	case 8:c=a-212;break;
	case 9:c=a-243;break;
	case 10:c=a-273;break;
	case 11:c=a-304;break;
	case 12:c=a-334;break;
	}
	printf("2014 年的第%d 天是%d 月%d 日\n",a,b,c);
}