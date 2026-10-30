#include<stdio.h>

int main()
{
	//要求，键盘输入两位整数，要求该数字不能包含7，而且不能是7的倍数
	//如果符合要求，输出1，不符合，输出0
	printf("请输入两位整数：\n");
	int a;
	scanf_s("%d",&a);
	int b = a / 10;
	int c = a % 10;
	int d = a % 7;
	printf("%d\n",b!=7&&c!=7&&d!=0);
}