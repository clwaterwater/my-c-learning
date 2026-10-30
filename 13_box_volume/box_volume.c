#include<stdio.h>

int main()
{
	double a,b,c;
	printf("请输入长方体的长、宽、高：");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	printf("a面的面积为:%.2lf\n",a*b);
	printf("b面的面积为:%.2lf\n",b*c);
	printf("c面的面积为:%.2lf\n",a*c);
	printf("长方体的体积为:%.2lf\n",a*b*c);
	return 0;
}