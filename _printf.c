#include "main.h"

/**
 * _printf- replica of the printf function
 *
 * @format: format specifier of printf function
 *
 * Return: 0 Always.
 */
int _printf(const char *format, ...)
{
	/* declaring varables used in the loop */
	unsigned int count = 0;
	unsigned int i;
	va_list ap;
	/* loop through to check if a format specifer is found */
	va_start(ap, format);
	/*
	 *  check if format specifer is not a % that is,
	 * it is a string then print it
	 */
	while (format[count] != '\0')
	{
		while (format[count] != '%' && format[count] != '\0')
		{
			_putchar(format[count]);
			count++;
		}
		count++;
		/* switch statement to check for a specified format specifer */
		switch (format[count])
		{
			/* if c is satisfied call the function to handle that case */
			case 'c':
				characterHandler(ap);
				count++;
				break;
			/* if s is satisfied call the function to handle that case */
			case 's':
				stringHandler(ap);
				count++;
				break;
		}
	}
	va_end(ap);
}

