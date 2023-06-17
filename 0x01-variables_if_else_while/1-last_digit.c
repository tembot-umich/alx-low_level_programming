#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**

 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	Last_digit = n % 10;

	if (Last_digit > 5)
{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
}
	else if (Last_digit == 0)
{
		printf("Last digit of %d is 0 and is 0\n", n);
}
	else
{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
	return (0);

}
