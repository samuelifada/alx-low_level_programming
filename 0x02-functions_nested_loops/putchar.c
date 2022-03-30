#include "main.h"
/**
 * main - to print _putchar
 * Return: Always 0
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(text[i]);
	}
	putchar(10);
	return (0);
}
