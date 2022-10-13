#include "main.h"

/**
 * Author: Jonathan, Boomni Oye
 * main - prints numbers 1 to 4 on same line
 * Using the following methods
 * a) one printf method with no conversion specifiers
 * b) one printf statement with four conversion specifiers
 * c) four printf statements
 * Return: 0
*/
int main(void)
{
	printf("1,2,3,4\n");

	printf("%d,%d,%d,%d\n", 1, 2, 3, 4);

	printf("%s,", "1");
	printf("%s,", "2");
	printf("%s,", "3");
	printf("%s\n", "4");
	return (0);
}

