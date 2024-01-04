#include <stdio.h>
/* A program that prints its input one word per line. */

#define IN 1	/* Represents when character iterator is in words. */
#define OUT 0	/* Represents when character iterator is out of words. */

int main() {
	int state, c;	/* Represents the state of the character iterator whether in or out and the iterator. */

	// The loop which iterate over every character of the input.
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		}
		else {
			putchar(c);
			state = IN;
		}
	}

	return 0;
}


