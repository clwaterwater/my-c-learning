#include<stdio.h>

int main()
{
	/*主持人给出任意一个数字，有三位小朋友对这个数字进行了不同的操作。
		注意：每个小朋友都是拿着前一个的结果进行的操作
		第一个小朋友：变成该数字的绝对值
		第二个小朋友：除以3获取余数
		第三个小朋友：乘以10请问该数字最终为多少 ?*/

	int number = -17;
	//1.
	number=number >= 0 ? number : -number;
	printf("%d\n",number);
	//2.
	//number = number % 3;
	//number %= 3;
	number %= 3;
	printf("%d\n", number);
	//3.
	number *= 10;
	printf("%d\n", number);

	//直接用逗号运算符得到最后的结果
	printf("%d\n",(number = number >= 0 ? number : -number, number %= 3, number *= 10));

	return 0;
}