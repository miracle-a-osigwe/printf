#include "main.h"

/**
 *strHandler - function call
 *Description: prints the string
 *@str: input to the function
 */

void strHandler(char * str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
}
