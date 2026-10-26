#include<stdio.h>

int main(void)
{
	int a;
	printf("请输入一个三位数:\n");
	scanf_s("%d", &a);

	//【修订】先确认真的是三位数：
	// 否则输入 1000 会印出“百位是 10”，输入 5 会印出“百位是 0”
	if (a < 100 || a > 999)
	{
		printf("输入的不是三位数，请重新运行并输入 100~999 之间的整数\n");
		return 1;
	}

	printf("百位是:%d\n", a / 100);
	printf("十位是:%d\n", a / 10 % 10);
	printf("个位是:%d\n", a % 10);
	return 0;
}
