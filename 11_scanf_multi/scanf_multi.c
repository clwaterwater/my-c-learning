#include<stdio.h>

int main()
{
	char a[100];
	int age;
	int height;
	printf("请输入你的姓名,年龄，体重：\n");
	scanf_s("%s%d%d",a,100,&age,&height);
	printf("你的姓名是:%s\n你的年龄是:%d\n你的体重是:%dkg\n",a,age,height);
	return 0;
}