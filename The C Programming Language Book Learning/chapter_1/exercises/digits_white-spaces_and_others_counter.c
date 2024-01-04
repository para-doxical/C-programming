#include <stdio.h>

/* This program counts the number of each digit, of whitespaces and of other
 characters in any entered stream of characters. */

void main() {
	// Declaration of variables.
	int c, i, w_spaces_count, others_count;
	int digits_counts[10];

	// Initialization of variables.
	w_spaces_count = others_count = 0;
	for (i = 0; i < 10; ++i) {
		digits_counts[i] = 0;
	}

	// The loop that iterates over the streams of characters.
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++digits_counts[c - '0'];
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			++w_spaces_count;
		}
		else {
			++others_count;
		}
	}

	// Printing out the result of the counts.
	printf("Digits Count: ");
	for (i = 0; i < 10; ++i) {
		printf("%d : %d   ", i, digits_counts[i]);
	}
	printf(", Whitespaces Count: %d, Others Count: %d\n", w_spaces_count, others_count);	
}

