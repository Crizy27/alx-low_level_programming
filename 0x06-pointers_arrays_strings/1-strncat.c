#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@scr: string to be completed at the end of dest
 *@n: integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *scr, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; scr[index] && index < n; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
