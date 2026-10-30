#include<stdio.h>

int main(void)
{
	int total = 3661;

	int hours = total / 3600;
	int minutes = total % 3600 / 60;
	int seconds = total % 3600 % 60;

	printf("%d秒=%d小时%d分钟%d秒\n", total, hours, minutes, seconds);
	return 0;
	//Workbuddy教我做的第一个程序
}