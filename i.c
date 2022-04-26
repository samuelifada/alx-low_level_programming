#include<stdio.h>

int _strlen(char *s)
{
	int i;
	int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	
	}
	return count;
 
}
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
