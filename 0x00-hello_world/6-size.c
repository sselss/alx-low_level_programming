#include <stdio.h>
/**
 *
 * main - to print various data types
 *
 * Return: always(0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu bytes(s)\n", sizeof(a));
	printf("Size of int: %lu bytes(s)\n", sizeof(b));
	printf("Size of long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(d));
	printf("Size of float: %lu bytes(s)\n", sizeof(e));
	return (0);
}
