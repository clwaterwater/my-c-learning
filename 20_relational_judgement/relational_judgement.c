#include<stdio.h>

int main()
{
	//思考1：如何判断一个数是否为偶数
	int a = 10;
	printf("%d\n", a % 2 == 0);//1为偶数

	//思考2：如何判断一个数字是否不超过100
	printf("%d\n",a<=100);//1为是

	//思考3：如何判断银行卡余额是否足够
	//需要支付的钱
	//银行卡余额
	int pay = 100;
	int money = 200;
	printf("%d\n", pay <= money);

}