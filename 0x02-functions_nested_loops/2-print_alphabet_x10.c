/*
 * File: 2-print_alphabet_x10.c
 * Auth: TheEliteCode
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int cycle = 0;
	char lets;

	while (cycle++ <= 9)
	{
		for (lets = 'a'; lets <= 'z'; lets++)
			_putchar(lets);
		_putchar('\n');
	}
}
