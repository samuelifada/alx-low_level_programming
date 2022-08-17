#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, product, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				putchar('0');
			}
			else if (product < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(ones + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar(tens + '0');
				putchar(ones + '0');
			}
		}
		putchar('\n');
	}
}
int main(void)
{
	times_table();
	return (0);
}
