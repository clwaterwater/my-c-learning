#include<stdio.h>

int main()
{
	int score;
	printf("请输入成绩：\n");
	scanf_s("%d",&score);
	if(score>100||score<0)
		printf("请重新输入");
	else {
		if (score < 80)
			printf("胖揍一顿");
		else if (score <= 89)
			printf("变形金刚一个");
		else if (score <= 94)
			printf("游乐场一天");
		else if (score <= 100)
			printf("自行车一辆");
	}
	return 0;
}