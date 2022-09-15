#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all the integers between the number given and 98
 * @n: number to count from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d\, ", n);
			{
				printf(", ");
			}
		}
		else if (n < 98)
		{
			for (; n < 98; n++)
			{
				printf("%d, ", n);
			}
		}
		printf("%d\n", n);
	}
}
