#include "holberton.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s);
{
	if *s == '\n' 
	{
		_putchar('\n');
	}
	else if (*s == 0)
	{
		
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
