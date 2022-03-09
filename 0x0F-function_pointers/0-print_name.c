#include "main.h"

/**
 *print_name - function that prints name
 *@name: name
 *@f: puntero
 *Return: asf
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
