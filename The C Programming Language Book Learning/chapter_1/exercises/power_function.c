#include <stdio.h>

/* In this porgram is an implementation of the power funtion which takes in 
 x and y and returns x^y.*/

int power(int base, int index);	// The function prototype of power function.

// Testing the power function.
int main() {
	int i;

	for (i = 0; i <= 5; ++i) {
		printf("2^%d = %d\n", i, power(2, i));
		printf("(-3)^%d = %d\n\n", i, power(-3, i));
	}

	return 0;
}



int power(int x, int y) {
	// Returns x^y.
	
	// Declarations.
	int idx, res;

	// Initializations.
	res = 1;

	for (idx = 1; idx <= y; ++idx) {
		res *= x;
	}
	return res;
}
