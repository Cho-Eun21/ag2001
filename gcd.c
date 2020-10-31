/* In file gcd.c */

#include <stdio.h>

int gcd(int a, int b)
{
	int dividend, divisor, remainder;

	if (b > a) {
		dividend = b;
		divisor = a;
	}
	else {
		dividend = a;
		divisor = b;
	}

	remainder = dividend % divisor;
	while (remainder != 0) {
		dividend = divisor;
		divisor = remainder;
		remainder = dividend % divisor;
	}
	return divisor;
}

int main(void)
{
	printf("gcd(10, 15) = %d\n", gcd(10, 15));
	printf("gcd(125, 13) = %d\n", gcd(125, 13));
	printf("gcd(625, 225) = %d\n", gcd(625, 225));
	printf("gcd(6840, 324) = %d\n", gcd(6840, 324));
}
