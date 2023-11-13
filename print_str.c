#include "main.h"

/**
 * _strlen - length of string
 * @str: string pointer
 * Return: i
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - strlen but for constant char pointer str
 * @str: char pointer
 * Return: i
*/

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
