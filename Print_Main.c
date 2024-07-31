#include "main.h"

/**
 * _printf - Main function of printf that
 *  handles the format and args
 * @format: Format specifies passed by the user(Programmer)
 * Return: Number of Characters(bytes) printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int length = 0;

	va_start(list, format);
	if (format == NULL)
	{
		length += _puts(NULL);
		return (6);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				length += _putchar('%');
			else if (*format == 'c')
				length += char_handle(va_arg(list, int));
			else if (*format == 's')
				length += str_handle(va_arg(list, char*));
			else
			{
				length += _putchar('%');
				length += _putchar(*format);
			}
		}
		else
			length += _putchar(*format);
		format++;
	}
	va_end(list);
	return (length);
}
