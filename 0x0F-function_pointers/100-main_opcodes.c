#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes own opcodes
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int bytes, m;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", arr[m]);
			break;
		}
		printf("%02hhx", arr[m]);
	}
	return (0);
}	
