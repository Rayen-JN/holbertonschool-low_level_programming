#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - func
 * @a: array
*/

void print_chessboard(char a[8][8])
{
	int column, row;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
		{
			putchar(a[column][row]);
		}
		putchar('\n');
	}
}
