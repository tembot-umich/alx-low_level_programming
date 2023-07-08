#include <stdio.h>
#include "main.h"

/**
 * main - writes name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
