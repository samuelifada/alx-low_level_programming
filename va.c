#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string and followed by a newline
 * @n : represents number of arguments
 *
 * Return : void
 */
void print_strings(const char *separator, int n, ...)
{
	va_list list;
	unsigned int i;

	i = 0;
	va_start(list, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n-1)
		      printf("%s", separator);
	  
		
	}
	putchar(10);
	va_end(list);
}
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	return (0);
}
