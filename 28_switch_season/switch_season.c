#include<stdio.h>

int main()
{
	/*需求：键盘录入月份数，输出对应的季节。
		春季：3、4、5月份夏季：6、7、8月份秋季：9、10、11月份
		冬季：12月份到次年的2月份*/
	int mouth;
	printf("请输入月份\n");
	scanf_s("%d",&mouth);
	switch (mouth) {
		case 3:
		case 4:
		case 5:printf("春季");break;
		case 6:
		case 7:
		case 8:printf("夏季");break;
		case 9:
		case 10:
		case 11:printf("秋季");break;
		case 1:
		case 2:
		case 12:printf("冬季");break;
		default:printf("输入错误");
	}
	return 0;
}