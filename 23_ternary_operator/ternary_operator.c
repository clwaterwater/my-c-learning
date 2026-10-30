#include<stdio.h>

int main()
{
	//三元运算符
	//格式：
	//关系表达式?表达式1：表达式2；

	////练习1：获取两个变量中的较大值
	//int a = 10;
	//int b = 20;
	//int c=a > b ? a : b;
	//printf("%d\n",c);
	//printf("%d", a > b ? a : b);

	//练习2：获取3个变量中的最大值
	int a = 10;
	int b = 20;
	int c = 30;
	int temp = a > b ? a : b;
	printf("%d", temp > c ? temp : c);

	return 0;
}