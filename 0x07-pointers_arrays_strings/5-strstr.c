#include <stdio.h>

/**
* strstr - finds substring
* @haystack: pointer 1
* @needle: pointer 2
* Return: pointer
*/

char *strstr(char *haystack, char *needle)
{

	unsigned int i, j, start_of_pointer, needle_len, match_len;

	i = 0;
	needle_len = 0;
	match_len = 0;

	while (needle[needle_len])
	{
		needle_len++;
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			start_of_pointer = i;
			for (j = 0; j < needle_len; j++)
			{
				if (needle[j] == haystack[j + start_of_pointer])
				{
					match_len++;
				}
				else
				{
					return (NULL);
				}
			}

		}
		i++;
	}
	if ((match_len !=  0) && (match_len == needle_len))
	{
		return (haystack + start_of_pointer);
	}

	return (NULL);
}

