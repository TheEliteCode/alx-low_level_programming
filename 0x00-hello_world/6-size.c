/* 
 * file 6-size.c
 * a C program that prints the size of various types on the computer
 * based on the program it is run
 */

#include <stdio.h>

/**
 * main  -prints the size of various types on the computer
 *         it is compiled to run
 *
 *         Return (0)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
   printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
