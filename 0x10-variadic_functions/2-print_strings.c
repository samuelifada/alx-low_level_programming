#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: a string printed between strings
 * @n: number of strings passed
 * Return: zero
 */                                      
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list valist;
        unsigned int i;
	char* str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);
		if(str == NULL)
		{
			printf("(nil)");

		}
		else
			printf("%s", str);
		if(separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}	
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	return (0);
}


