#include<stdio.h>

int main()
{
	int a;
	printf("请输入一个三位数:\n");
    scanf_s("%d",&a);
	printf("百位是:%d\n",a/100);
	printf("十位是:%d\n",a/10%10);
	printf("个位是:%d\n",a%10);
}