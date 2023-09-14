#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 *main - make sure the rogramme work
 *Return: 0 always true
 */

int main(void)
{
	return (0);
}
