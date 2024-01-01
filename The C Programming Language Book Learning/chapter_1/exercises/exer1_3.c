#include <stdio.h>
// Series of Fahrenheit to Celsius converter.
void main() {
	printf(">> This is a Fahrenheit to Celsius Converter <<\n");
	
	//Printing out the values.
	printf("Fahrenheit\t\tCelsius\n");
	for (int i=0; i<=300; i+=20) {
		float F = i;
		float C = (5*(F-32)/9);
		printf("%.2f\t\t\t%.2f\n",F,C);
	}
}

