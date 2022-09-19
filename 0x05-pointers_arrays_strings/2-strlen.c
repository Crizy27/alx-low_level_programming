#include "main.h"

/**
 *_strlen - returns the length of a string
 *_@s: string
 *Return: returns length as ingeger;
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		++len;

	return (len);
}
