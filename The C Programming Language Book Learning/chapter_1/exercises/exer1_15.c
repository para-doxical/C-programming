#include <stdio.h>

#define LOWER 0
#define UPPER 300

/* This program converts Fahrenheit values of 0,20, 40, ..., 300 to their
 corresponding Celsius value. */

float fahrToCelsius(float fahr_temp);	/* The fahrenheit to celsius function prototype. */

/* The fahrenheit to celsius converter function.*/
float fahrToCelsius(float fahr_temp) {
	float celsius_temp;

	celsius_temp =  (5 * (fahr_temp - 32)) / 9;

	return celsius_temp;
}


/* The main method (where the execution begins from). */
int main() {
	//Declarations.
	int fahr_value;

	printf("Fahrenheit\t\tCelsius\n");

	for (fahr_value = LOWER; fahr_value <= UPPER; fahr_value = fahr_value + 20) {

		printf("%6d %24.2f\n", fahr_value, fahrToCelsius((float)fahr_value));
	}
}

