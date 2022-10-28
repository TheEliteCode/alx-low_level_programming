#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(s);
	printf("%s", ptr);
	printf("%s", s);
	return (0);
}
