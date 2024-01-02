#include <stdio.h>

/* This program counts  the number of characters 
in a file using the for-construct. */

void main() {
	double counter;

	for (counter = 0; getchar() != EOF; ++counter);
	printf("\nNumber of characters is: %.0f\n", counter);
}

