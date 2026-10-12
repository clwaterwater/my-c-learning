//#include<stdio.h>
//
//int main()
//{
//	//1.定义short,int,long,long long斯种数据类型的变量
//	//格式：数据类型 变量名=数据值；
//	//short 短整型 windows 2个字节 （-32768~32767）
//	short a = 10;
//	printf("%d\n", a);
//
//	//int 整数 windows 4个字节
//	int b = 100;
//	printf("%d\n", b);
//
//	//long 长整型 windows 4个字节
//	long c = 1000L;//长整型后面要加L/l
//	printf("%ld\n", c);//长整型要加L/l
//	
//	//long long(C99）超长整型 windows 8个字节
//	long long d = 10000LL;//也要加后缀
//	printf("%lld\n", d);
//
//	//2.利用sizeof测量每一种数据类型占多少字节？
//	// sizeof(变量名/数据类型）
//	//short
//	printf("%zu\n", sizeof(short));
//	//也可以测变量
//	printf("%zu\n", sizeof(a));
//
//	//int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(b));
//
//	//long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(c));
//}