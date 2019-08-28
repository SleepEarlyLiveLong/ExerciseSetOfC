/*
Question 07: Find all pairs of numbers within 100, such as 24*63=42*36
*/
#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=1;c<=9;c++)
				for(d=1;d<=9;d++)
				{
					if(((a*10+b)*(c*10+d))==((b*10+a)*(d*10+c)))
					{
						if((a!=b)&&(c!=d))
						{
							if((b*10+a)!=(c*10+d))
							{
								e=a*10+b;
								f=c*10+d;
								if(e<=f)
									printf("%d %d\n",e,f);
							}
						}
					}
				}
	return 0;
}