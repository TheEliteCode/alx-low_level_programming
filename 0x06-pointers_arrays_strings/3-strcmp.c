/*
 * File: 3-strcmp.c
 * Auth: TheEliteCode
 */

#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2
 *         If str1 == str2, 0.
 *         If str1 > str2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

char *_memset(char *S, char b, unsigned int n)
{
    return nullptr;
}

char *memcpy(char *dest, char *src, unsigned int n)
{
    return nullptr;
}
