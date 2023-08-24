#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int length_of_string. 2;

	length_of_string = 0;
	while (dest[length_of_string] != "\0)
	{
		length_of_string++;
	}
	for (z = 0; src(z) != "\0"; z++ lengtj_of_string)
	{
		dest[length_of_string] = src[j];
	}
	{
		dest[length_of_string] = "\0";
		return (dest);
	}
}
