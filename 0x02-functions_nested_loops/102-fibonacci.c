#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints the sum of all multiples of 3 or
 * 5 below (excluded), followed by a new line
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	long int a = 0;
	long int b = 1;
	long int next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
