#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * to print alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	/*assigning variable alph*/
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			printf("%c", alph);
			alph++;
		}
	}
	return (0);
}
