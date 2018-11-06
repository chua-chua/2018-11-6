/*
接收两个数，一个为用户一年期定期存款金额，一个为按照百分比格式表示的利率，
程序计算一年期满后本金与利息总额
*/
#include<stdio.h>
int main()
{
	float money;
	float rate;
	printf("请输入一年期金额(元)和利率(省略%%):\n");
	scanf("%f%f",&money,&rate);
	rate /= 100;
	money += float(money*rate*0.95);
	printf("一年期满后的总额:%.2f(元) \n",money);
	return 0;
}