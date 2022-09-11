#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print if the number is positive, zero, or negative
 *
 *Description: using the main function
 *this program prints "programming is positive, zero, or negative
 *Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND-MAX /2;
 /*your code goes there */
if (n > 0)
{
	ptintf("%i is positive\n", n);
}
else if (n == 0)
{
	print("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is ngative\n",);
return (0);
}
