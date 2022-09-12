#include <stdio.h>
/**
 * main - prints the number sice 0 to 9
 *
 * Return: Always (sucess)
 */

int main(void)
{
	int n;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}
