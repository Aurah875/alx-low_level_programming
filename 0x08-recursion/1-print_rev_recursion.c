#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: the string to be printed in reverse.
 * Description:This function uses recursion to print each character of the string in reverse
 * order. It starts from the end of the string and works backwards.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
