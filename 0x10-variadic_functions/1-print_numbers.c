#include "variadic_functions.h"

/**
 * print_numbers - a function that prints number
 * @separator: string printed between number
 * @n: shows amount of arguments
 * Return: always zero
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(list, int), separator);
		//if (separator && i <  (n - 1))
		//{
			//printf("%s",  separator);
		//}
	}
	printf("\n");
	va_end(list);
}
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}

