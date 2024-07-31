#include "main.h"
/**
 * str_handle - Handling the strings passed by the user
 * @str: the string passed
 * Return: the length of passed string
 */
int str_handle(char *str)
{
	int length = 0;

	length = _puts(str);

	return (length);
}
