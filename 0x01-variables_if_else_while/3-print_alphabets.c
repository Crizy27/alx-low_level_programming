#include <stdio.h>
/**
 *main - print if the number is positive, zero, or negative
 *
 *Description: using the main function
 *this program prints "programming is positive, zero, or negative
 *Return:
 */
int main(void)
{
	char letter;
	for (letter = 'a' ; letter <= 'z' ; letter)
	{
		putchar(letter);
	}
	for (letter = "A" ; letter <= "Z" ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
