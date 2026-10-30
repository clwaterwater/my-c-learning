#include<stdio.h>

int main()
{
	//练习一
	char a[100];//字符串变量的定义方式：数据类型 变量名[内存占用大小]=字符串;
	printf("请输入你朋友的名字:\n");
	scanf_s("%s",a,100);//重要，字符串要申报容量，scanf_s 读字符串要申报容量；printf 打印字符串不要
	printf("我朋友的名字是:%s\n", a);

	//练习2
	int age;
	printf("请输入你的年龄:\n");
	scanf_s("%d", &age);
	printf("你的年龄是:%d", age);

}