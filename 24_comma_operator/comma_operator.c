#include<stdio.h>

int main()
{
	//逗号运算符（分隔符）
	int i;
	printf("%d\n", (i = 3, ++i, i++, i + 5));
}