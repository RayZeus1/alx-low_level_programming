#include "main.h"
#include <stdio.h>

/**
 * 0-isupper.c
 * @c: Variable tex
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
