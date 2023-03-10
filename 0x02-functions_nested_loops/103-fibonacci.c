#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints even number < 4,000,000
 * 5 below 1024 (exclusive), followed by a new line
 * Return: always 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
