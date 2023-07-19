#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Write a function
* that prints 10 times the alphabet,
* in lowercase, followed by a new line.
*Return:  void.
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
