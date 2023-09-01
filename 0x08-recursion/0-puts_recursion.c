#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @S: input
 * Return: Always 0 (success)
 */
void_puts_recursion(char *S)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
