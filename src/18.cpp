/*
Question 18: Screen and print characters with even Subscripts 
*/
#include <stdio.h>
void main()
{
	char str1[]="abcdefghijklmn",str2[20]={'\0'};
	int i,j=0;
	for(i=0;str1[i];i++)
	{
		if(i%2==0)str2[j++]=str1[i];
	}
	printf("%s\n%s\n",str1,str2);
}