#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *H = haystack;
		char *n = needle;

		while (*H == *n && *n != '\0')
		{
			H++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
