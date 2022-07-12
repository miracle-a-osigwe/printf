#include "main.h"
/**
  *characterHandler - function call
  *Description: puts character to the screen
  *@c: input to function
  */
int characterHandler(char c)
{
	int count;
	char *a;

	a = malloc(sizeof(c) * 3);

	*a = c;

	for (count = 0; a[count] != '\0'; count++)
	{
		_putchar(a[count]);
	}
	free(a);
	return (count);
}
