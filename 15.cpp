/*
������������һ��Ϊ�û�һ���ڶ��ڴ���һ��Ϊ���հٷֱȸ�ʽ��ʾ�����ʣ�
�������һ�������󱾽�����Ϣ�ܶ�
*/
#include<stdio.h>
int main()
{
	float money;
	float rate;
	printf("������һ���ڽ��(Ԫ)������(ʡ��%%):\n");
	scanf("%f%f",&money,&rate);
	rate /= 100;
	money += float(money*rate*0.95);
	printf("һ����������ܶ�:%.2f(Ԫ) \n",money);
	return 0;
}