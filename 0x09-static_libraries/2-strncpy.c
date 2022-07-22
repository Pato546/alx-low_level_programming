
/**
* _strncpy - copy one string to the other;
* @dest: pointer 1;
* @src: pointer 2;
* @n: number of bytes to copy
* Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, check_null;

	check_null = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			check_null = 1;

		dest[i] = src[i];
	}

	if (check_null != 0)
		dest[i] = '\0';

	return (dest);
}

