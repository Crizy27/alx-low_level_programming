#include <stdio.h>
/**
 * main - print if the number is positive , zero, or negative
 *
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 48; ch <= 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch >= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
