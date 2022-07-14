
/**
* reverse_array - reverse array;
* @a: pointer to array
* @n: sizeof array
* Return: void
*/

void reverse_array(char *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}

