#include "main.h"
/**
 * print_alphabet - prints alphabets
 */
void print_alphabet(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
