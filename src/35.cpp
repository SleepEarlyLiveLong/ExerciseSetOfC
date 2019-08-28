/*
Question 35: The Hanoi Tower Problem 
*/
#include<stdio.h>
#include<conio.h>
void move(int n,char s,char d);
void hanoi(int n,char x,char y,char z);
int main()
{
	int n;
	printf("Please input the number of the HANOI TEPTER:\n");
	scanf("%d",&n);
	hanoi(n,'X','Y','Z');
	printf("Please press any key to continue...");
	getch();
	return 0;
}
void hanoi(int n,char x,char y,char z)
{
	if(n==1)
		move(n,x,z);
	else
	{
		hanoi(n-1,x,z,y);
		move(n,x,z);
		hanoi(n-1,y,x,z);
	}
}
void move(int n,char s,char d)
{
	printf("%d\t%c-->%c\t",n,s,d);
}
