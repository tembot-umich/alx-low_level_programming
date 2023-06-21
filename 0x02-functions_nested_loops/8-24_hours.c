#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return:void
 */
void jack_bauer(void)
{
	int a,z,x,c;
	for(a=0;a <=2;a++)
	{
		for (z=0;z <=9;z++)
		{
			if ((a <=1 && z <+9) || (a <= 2 && z <= 3))
			{
				for (x = 0; x <= 5; x++)
				{
					for (c = 0; c <=9; c++)
					{
						  if ((a <= 1 && z <= 9) || (a <= 2 && z <= 3))
                        {
                                for (x = 0; x <= 5; x++)
                                {
                                        for (c = 0; c <= 9; c++)
					{
                                                _putchar(a + '0');
                                                _putchar(z + '0');
                                                _putchar(58);
                                                _putchar(x + '0');
                                                _putchar(c + '0');
                                                _putchar('\n');


