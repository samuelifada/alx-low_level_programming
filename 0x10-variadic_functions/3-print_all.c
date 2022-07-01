#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i;
	
	va_start(valist, format);
	while(i < 2)
	{
		printf("%s", va_arg(valist, char*));
		i++;
	}
	printf("%c", va_arg(valist, int));
	printf("%d", va_arg(valist, int));

	va_end(valist);


	
}
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
