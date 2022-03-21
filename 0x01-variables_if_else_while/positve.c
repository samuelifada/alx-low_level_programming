#include<stfio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Positive anything is better than negative nothing
 *
 * Return: 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX/2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
