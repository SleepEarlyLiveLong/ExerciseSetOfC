/*
Question 27: Calculating N-th power of M by recursive method
*/
#include<stdio.h>
long int GCF(int m,int n);

int main()
{
	long m,n,c;
	printf("Please input m and n:\n");
	scanf("%d%d",&m,&n);
	c=GCF(m,n);
	printf("%d^%d=%d\n",m,n,c);
	return 0;
}
long int GCF(int m,int n)
{
	long int z;
	if(n==1)
		z=m;
	else
		z=GCF(m,n-1)*m;
	return z;
}
