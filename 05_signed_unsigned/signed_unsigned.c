#include <stdio.h>

int main(void)
{
	// ============================================
	// signed（有符号） vs unsigned（无符号）
	// ============================================
	// signed   ：能表示正数、负数和 0。定义变量时默认就是 signed，
	//            所以平时写的 int a = 10; 其实是 signed int a = 10;
	// unsigned ：只能表示正数和 0。好处是同样的字节数，
	//            能表示的最大正数翻一倍（因为不用拿一半位置去放负数）。
	//
	// 各种整型的大小见 04_integer_types。
	// ============================================

	// ---------- 1. signed：可以有负数 ----------
	signed int e = -100;
	printf("signed int e = %d\n", e);

	// signed 一般省略不写，下面这两行完全等价
	int e2 = -100;
	printf("int e2      = %d\n", e2);

	// ---------- 2. unsigned：只有正数和 0 ----------
	// 序号、年龄、数量这类「不可能为负」的，适合用 unsigned
	unsigned int f = 999;
	printf("unsigned int f = %u\n", f);
	// 注意占位符要跟着变：unsigned 用 %u，不是 %d

	// ---------- 3. 用 sizeof 看看占几个字节 ----------
	printf("signed int 占 %zu 字节\n", sizeof(signed int));
	printf("int        占 %zu 字节\n", sizeof(int));
	printf("unsigned   占 %zu 字节\n", sizeof(unsigned int));
	// signed 和 unsigned 占的字节数一样，
	// 区别只在于「这一半格子拿来干什么」。

	// ---------- 4. 别给 unsigned 塞负数 ----------
	// unsigned int g = -1;
	// printf("%u", g);   ← 不会报错，但印出来是个巨大的正数
	// 因为 -1 的二进制被硬当成正数读了。这是典型的「能编译但结果是错的」。

	unsigned int h = -1;
	printf("unsigned int h = -1 → 打印结果是：%u\n", h);
	printf("（不是 -1！因为它没有表示负数的能力）\n");

	return 0;
}
