
/**
* _memset - Fill n bytes of memory
* @s: pointer
* @b: buffer
* @n: bytes of memory
* Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

