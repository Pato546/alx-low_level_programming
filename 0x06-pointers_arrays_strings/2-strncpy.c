
/**
* _strncpy - copy one string to the other;
* @dest: pointer 1;
* @src: pointer 2;
* @n: number of bytes to copy
* Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

