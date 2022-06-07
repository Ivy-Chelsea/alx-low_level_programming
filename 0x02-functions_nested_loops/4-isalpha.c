#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: char type letter
 *
 * Return: 1 if @c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
