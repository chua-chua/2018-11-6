/*
��дһ���򣬽����û�������������������������ǵĺ͡�������̡�
*/
#include<stdio.h>
int main()
{
	int m,n;
	printf("Write a program that takes two integers from user input"
		"and calculates their sum, difference, product, and quotient.\n");
	printf("�����һ����:");
	scanf("%d",&m);
	printf("����ڶ�����:");
	scanf("%d",&n);
	printf("���: \n");
	printf("%d + %d = %d \n",m,n,m+n);
	printf("%d - %d = %d \n",m,n,m-n);
	printf("%d * %d = %d \n",m,n,m*n);
	if( n==0 )
	{
		printf("����Ϊ0,�̲�����! \n");
		return 0;
	}
	printf("%d / %d = %d \n",m,n,m/n);
	return 0;
}