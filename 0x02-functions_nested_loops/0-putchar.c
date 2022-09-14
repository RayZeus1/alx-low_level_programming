#include <unistd.h>
/**
 * main - Print the word "Ray"
 *
 * Return: On success 1.
 */
int main(void)
{
	int i;
	char p[] = "Ray";

	for (i = 0; i < 3; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
