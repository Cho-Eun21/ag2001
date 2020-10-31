/* In file sum.c */
/* Read in two integers and print their sum. */

#include <stdio.h>

int main(void)
{
	int a, b, sum;

	printf("Input two Integers :	");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
	return 0;
}
