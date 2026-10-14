#include<stdio.h>

int main()
{
	//1.定义short,int,long,long long斯种数据类型的变量
	//格式：数据类型 变量名=数据值；
	//short 短整型 windows 2个字节 （-32768~32767）
	short a = 10;//完整形态是short int a=10
	printf("%d\n", a);

	//int 整数 windows 4个字节
	int b = 100;
	printf("%d\n", b);

	//long 长整型 windows 4个字节
	long c = 1000L;//长整型后面要加L/l
	printf("%ld\n", c);//长整型要加L/l

	//long long(C99）超长整型 windows 8个字节
	long long d = 10000LL;//也要加后缀
	printf("%lld\n", d);


	//2.有符号整数、无符号整数的定义情况
	//signed 有符号整数 有正数 负数(定义变量时默认有符号)
	//unsigned 无符号整数 只有正数

	signed int e = -100;
	printf("%d\n", e);

	//定义一个变量表示序号
	unsigned int f = 999;
	printf("%u\n", f);
	
}	