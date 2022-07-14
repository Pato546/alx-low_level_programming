
/**
* _strcmp - compares strings
* @s1: str 1
* @s2: str 2
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int counter, i;

	counter = 0;

	for (i = 0; s1[i] && s2[i] != '\0'; i++)
		counter += s1[i] - s2[i];

	return (counter);
}

