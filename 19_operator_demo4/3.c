#include<stdio.h>

int main()
{
	int a = 10;
	int k1 = a++ + a++;
	//       10  +  10=20,  a=12   
	int k2 = ++a + ++a;
	//       14  +  14=28,  a=14
	int k3 = ++a + a++;
	//       15  +  15=30,  a=16
	int k4 = a++ + ++a;
	//       17  +  17=34,  a=18
}