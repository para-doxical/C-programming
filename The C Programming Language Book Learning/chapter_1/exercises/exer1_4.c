#include <stdio.h>
/* This is a program that prints Celsius values and the corresponding
 Fahrenheit values.
 */
void main() {
	float celsius_value, fahr_value;
	// Printing out the celsius-fahrenheit values.
	printf("Celsius\t\tFahrenheit\n");
	celsius_value = 0;
	while (celsius_value <= 300) {
		fahr_value = (9 * celsius_value/5)+32;
		printf("%7.2f %10.2f\n",celsius_value, fahr_value);
		celsius_value += 20;
	}
}
