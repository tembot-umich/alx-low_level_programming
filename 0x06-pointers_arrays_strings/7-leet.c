#include "main.h"
/**
 * leet - encode into 1337 speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int o, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (o = 0; n[o] != '\0'; o++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[o] == s1[p])
			{
				n[o] = s2[p];
			}
		}
	}
	return (n);
}
