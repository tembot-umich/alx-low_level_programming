#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int s;
	int b;

	for (s = 0; s < 9; s++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[s][b]);
		_putchar('\n');
	}
}
