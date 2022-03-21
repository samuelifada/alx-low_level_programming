#include<stdio.h>
/**
 * main - Entry point
 * to write both upper and lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char Ualph;
	char Lalph;

	/*assigning characters to declared variables*/
	for (Ualph = 'A'; Ualph <= 'Z'; Ualph++)
	{
		putchar(Ualph);
	}
	Lalph = 'a';
	while (Lalph <= 'z')
	{
		putchar(Lalph);
		Lalph++
	}
	putchar(\n);
	return (0);
}
