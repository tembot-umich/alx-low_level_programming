#include "main.h"
#include <stdio.h>
/**
 * main - Prints combination of numbers
 *
 * Retrn: Always (success)
 */
int main(void)
{
	int g, h;

	for (g = '0'; g <= '9'; g++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (g < h)
			{
				putchar(g);
				putchar(h);

				if (g != '8' || (g == '8' && h != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

