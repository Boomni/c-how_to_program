#include "main.h"

/**
 * Author: Jonathan, Boomni Oye
 * main - program that asks user for two numbers and prints the sum,
 * product, difference, quotient and remainder
 * Return: 0
*/
int main(void)
{
	float a, b;
	float difference = 0;

	puts("Enter two integers:");
	scanf("%f%f", &a, &b);
	if (a < b)
		difference = b - a;
	else if (a > b)
		difference = a - b;
	printf("You entered %.2f and %.2f\n", a, b);
	printf("Sum = %.2f\n", a + b);
	printf("Product = %.2f\n", a * b);
	printf("Difference = %.2f\n", difference);
	printf("Quotient = %.2f\n", a / b);
	printf("Remainder = %.2f\n", fmod(a, b));
	return (0);
}

