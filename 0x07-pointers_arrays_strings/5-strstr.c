#include "main.h"
#include <stdio.h>

/**
 * _strstr - strcasestr - locate a substring
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
			&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
