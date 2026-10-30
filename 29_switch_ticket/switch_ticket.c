#include<stdio.h>

int main()
{
	/*在实际开发中，如果我们需要在多种情况下选择其中一个，就可以使用switch语句。当我们拨打了某些服务电话时，一般都会有按键选择。
		假设现在我们拨打了一个机票预定电话。电话中语音提示：
		1机票查询
		2机票预订
		3机票改签
		4退出服务
		其他按键也是退出服务。请使用swtich模拟该业务逻辑。*/
	int key;
	printf("请在1，2，3，4中选择一个\n");
	scanf_s("%d",&key);
	switch (key)
	{
	case 1:printf("机票查询");break;
	case 2:printf("机票预定");break;
	case 3:printf("机票改签");break;
	case 4:printf("退出服务");break;
	default:printf("退出服务");
	}
	return 0;
}