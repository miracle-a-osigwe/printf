#include "main.h"


/**
 *_digit - Function call
 *Description: Expects integer specifiers and prints the corresponding format
 *@value: integer input to the function
 *return: returns the length of the integer
 */

int digitHandler(int value)
{
	int x;

	if (value < 0)
	{
		_putchar('-');
		value = value * -1;
	}

	if (value != 0)
	{
		digitHandler(value/10);
		_putchar((value%10) + '0');
	}
	x = sizeof(value);
	return(x);
}
