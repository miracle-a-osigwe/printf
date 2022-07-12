#include "main.h"


/**
 *_printf - Function call
 *Description: A replica of the standard printf function
 *@format: format to use for the function
 *return: Returns the length of the format
 */

int _printf(const char *format, ...)
{
	va_list nlist;
	/*int d, c, i;
	char * s;
	float f;
	double lf;
	unsigned int u;*/
	int x = 0;
	int y = 0;
	char *str;

	str = malloc(sizeof(format) * strlen(format));

	strcpy(str, format);

	va_start(nlist, format);

	while (str[x] != '\0')
	{
		if (str[x] == '%')
		{
			y = _switch_check(str, nlist);
			x++;

			if (y != 0)
			{
				x++;
			}
			else
			{
				x--;
			}
		}
		_putchar(str[x]);
		x++;
	}
	return (x);
}


/**
 *_switch_check - Function call
 *Description: Decision making function to print
 *@str: Format in the string that points to what is to be printed
 *@nlist: list of type va_list
 */

int _switch_check(const char *str, va_list nlist)
{
	int x = 0;

	while (str[x] != '\0')
	{
		char y = str[x];

		if (y == '%')
		{
			char xx = str[x + 1];

			switch (xx)
			{
			case 'c':
				characterHandler(va_arg(nlist, int));
				x++;
				break;
			case 's':
				strHandler(va_arg(nlist, char *));
				x++;
				/*strHandler(str);*/
				break;
			case 'd':
				digitHandler(va_arg(nlist, int));
				x++;
				break;
			default:
				break;

			}
		}
		x++;
	}
	va_end(nlist);
	return (x);
}
