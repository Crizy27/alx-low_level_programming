#include <stdio.h>
/**
 * main - print if the number is posive, zero, or negative
 *
 * Description: using the main function.
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
