/*
编写一程序，接收用户输入的两个整数，并计算它们的和、差、积、商。
*/
#include<stdio.h>
int main()
{
	int m,n;
	printf("Write a program that takes two integers from user input"
		"and calculates their sum, difference, product, and quotient.\n");
	printf("输入第一个数:");
	scanf("%d",&m);
	printf("输入第二个数:");
	scanf("%d",&n);
	printf("结果: \n");
	printf("%d + %d = %d \n",m,n,m+n);
	printf("%d - %d = %d \n",m,n,m-n);
	printf("%d * %d = %d \n",m,n,m*n);
	if( n==0 )
	{
		printf("除数为0,商不存在! \n");
		return 0;
	}
	printf("%d / %d = %d \n",m,n,m/n);
	return 0;
}