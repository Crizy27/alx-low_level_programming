#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print if the number is positive, zero, or negative
 * number stored in the variable n
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d ", n, n % 10);
	if (1 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
