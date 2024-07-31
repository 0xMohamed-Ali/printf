#include "main.h"
/**
 * _puts - Printing the string passed by user in the STDOUT
 * @str: Passed string
 * Return: Number of passed string(bytes);
 */
int _puts(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		length = 6;
		return (length);
	}
	while (*(str + length))
	{
		write(1, str + length, 1);
		length++;
	}
	return (length);
}
