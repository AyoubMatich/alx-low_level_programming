# include "main.h"

/**
 * _puts_recursion - function that prints a string, followed
 * @s: this is varable string
 * Return: On success 1.
*/

void _puts_recursion(char *s);

{
	if *s == 0
	{
		_putchar(\n);
		return;
	}
	_putchar(*s);
	_puts_recursion(s ++);
}