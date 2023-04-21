#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @d: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*d)(char *))
{
	if (name == NULL || d == NULL)
		return;

	d(name);
}
