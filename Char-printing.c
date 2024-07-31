#include "main.h"
/**
 * _putchar - Printing passed string character by character
 * @ch: character to be printed
 * Return: the number of bytes(characters) printed
 */
int _putchar(char ch)
{
	if (ch != '\0')
	{
		(write(1, &ch, 1));
		return (1);
	}
	else
		return (0);
}
