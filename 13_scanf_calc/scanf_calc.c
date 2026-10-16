#include<stdio.h>

int main()
{
	int num1;
	int num2;
	printf("请输入两个整数:\n");
	scanf_s("%d%d", &num1, &num2);//输入时在两个数之间打空格就可以区分num1和num2了
	int num3 = num1 + num2;
	int num4 = num1 - num2;
	int num5 = num1 * num2;
	int num6 = num1 / num2;
	int num7 = num1 % num2;
	printf("输出结果为：\n");
	printf("%d,%d\n", num3, num4);
	printf("%d,%d\n", num5, num6);
	printf("%d\n", num7);
	return 0;

}