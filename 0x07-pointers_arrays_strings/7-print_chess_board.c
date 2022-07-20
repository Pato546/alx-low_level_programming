#include  "main.h"

/**
* print_chessboard - Print ChessBoard
* @a: ...
* Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	int sizeof_arr = sizeof(arr);

	int row = sizeof_arr / (8 * sizeof(char));

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

