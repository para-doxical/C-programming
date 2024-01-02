#include <stdio.h>
/* This is a program that prints Fahrenheit values and the corresponding
 Celsius values.
 */
void main() {
	float celsius_value;
	// Printing out the fahrenheit-celsius values.
	printf("Faharenheit\t\tCelsius\n");
	for (int fahr_value = 300; fahr_value >= 0; fahr_value -= 20) {
		celsius_value = 5*(fahr_value-32)/9;
		printf("%7d %10.2f\n", fahr_value, celsius_value);
	}
}
