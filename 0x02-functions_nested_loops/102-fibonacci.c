#include <stdio.h>
/**
 *main - function
 *Description: function that prints prints the first 50 Fibonacci numbers
 *starting with 1 and 2
 *Return: always 0
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
