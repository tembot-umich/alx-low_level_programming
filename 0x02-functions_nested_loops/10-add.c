#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Retrn: Always (success)
 */
int main(void)
{
	int g, h;

	for (g = '0'; g <= '9'; c++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (g < h)
			{
				putchar(c);
				putchar(i);

				if (g != '8' || (c == '8' && i != '9'))
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

