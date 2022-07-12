#include "main.h"

/**
 *strHandler - function call
 *Description: prints the string
 *@str: input to the function
 */

int strHandler(char * str)
{
	int x = 0;
	char *string;

	string = malloc(sizeof(str) * strlen(str));

	strcpy(string, str);

	while (string[x] != '\0')
	{
		_putchar(string[x]);
		x++;
	}
	free(string);
	return (x);
}
