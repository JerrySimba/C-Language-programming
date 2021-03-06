#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] -= 32;

		j++;
	}

	return (str);
}
