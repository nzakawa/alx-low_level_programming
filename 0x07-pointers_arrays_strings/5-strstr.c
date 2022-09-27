#include "main.h"
/**
 * _strstr - function that locate substring
 * @haystack: string to be searched
 * @needle: The substring to be located
 *
 * Return: return poiter to the beginning of located string
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		j = 0;

		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;
			} while (haystack[j] == needle[j]);
		}
		haystack++;
	}
	return ('\0');
}

