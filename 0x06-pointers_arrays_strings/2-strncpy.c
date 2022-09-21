#include "main.h"
/**
 *  _strncpy - C function that copies a string, includeing the
 *  terminating null byte, using at most an inputted number of bytes.
 *  If the length of the string is less than the maximum byte number.
 *  the remender of the destination string is filled with the null bytes.
 *  Work identically to the starndard library function 'strcncpy'.
 *@dest: buffer storing the strin copy
 *@src: the source string
 *@n: max number of byte copied
 *Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
