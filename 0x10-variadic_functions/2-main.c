#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	return (0);
}
