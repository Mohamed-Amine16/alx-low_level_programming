#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd print the last n characters of the string 
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, leng;

	leng = 0;

	for (a = 0; str[a] != '\0'; a++)
		leng ++;

	n = (leng / 2);

	if ((leng % 2) == 1)
		n = ((leng + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
