#include <stdio.h>

int main()
{
	//1.定义float、double、long double数据类型的变量
	//float 
	float a = 3.14F;//windows默认小数赋值double类型的，赋值成float类型的要在末尾加F
	printf("%.2f\n", a);

	//double
	double b = 1.78;
	printf("%.2lf\n", b);

	//long double
	long double c = 3.1415926;
	printf("%lf\n", c);

	//2.利用sizeof测量每一种数据类型占多少字节
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(a));

	//3.小数的数据类型无法跟unsigned组合使用
}