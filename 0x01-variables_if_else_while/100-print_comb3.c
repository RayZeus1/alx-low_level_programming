#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar(c + '0');
			putchar(d + '0');

			if (c < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
