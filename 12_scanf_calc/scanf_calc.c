#include<stdio.h>

int main(void)
{
	int num1;
	int num2;
	printf("请输入两个整数:\n");
	scanf_s("%d%d", &num1, &num2);//输入时在两个数之间打空格就可以区分num1和num2了

	//【修订】先确认除数不是 0，不然 num1 / num2 会直接崩（整数除零）
	if (num2 == 0)
	{
		printf("除数不能为 0，请重新运行并输入一个非零的第二个数\n");
		return 1;
	}

	int num3 = num1 + num2;
	int num4 = num1 - num2;
	int num5 = num1 * num2;
	int num6 = num1 / num2;   //【注】整数除法会截断：7 / 2 得 3，不是 3.5
	int num7 = num1 % num2;
	printf("输出结果为：\n");
	printf("%d,%d\n", num3, num4);
	printf("%d,%d\n", num5, num6);
	printf("%d\n", num7);
	return 0;
}
