#include<stdio.h>

int main(void)
{
	int total = 3661;

	int hours = total / 3600;
	int minutes = total % 3600 / 60;
	int seconds = total % 3600 % 60;

	printf("%d√Î=%d–° ±%d∑÷÷”%d√Î\n", total, hours, minutes, seconds);
	return 0;
}