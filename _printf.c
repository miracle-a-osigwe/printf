#include "main.h"


/**
 *_printf - Function call
 *Description: A replica of the standard printf function
 *@format: format to use for the function
 *
 */

int _printf(const char *format, ...)
{
	va_list nlist;
	int d, c, i;
	char * s;
	float f;
	double lf;
	unsigned int u;
	int x = 0, y = 0;;

	while (format[x] != '\0')
	{
		_switch_check(format, nlist);
		x++;
	}
	retuen (0);
}


/**
 *_switch_check - Function call
 *Description: Decision making function to print
 *@format: Format of what is to be printed
 *@nlist: list of type va_list
 */

int _switch_check(*format, *nlist)
{
	int x = 0;

	va_start(nlist, format);

	while (format[x] != '\0')
	{
		char y = format[x];

		if (y == '%')
		{
			char xx = format[x + 1];

			switch (xx)
			{
			case 'c':
				int c = va_arg(nlist, int);
				charHandler(c);
				break;
			case 's':
				char * str = va_arg(npist, char *);
				strHandler(str);
				break;
			default:
				break;

			}
		}
		x++;
	}
	return (0);
}
