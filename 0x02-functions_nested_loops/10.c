#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * task 2
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alph;
	int round;

	alph = 'a';
	round = 0;

	while (round < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
		putchar(10);
		round++;
	}
}
