#include <stdio.h>

/* This program counts number of lines in a stream of characters by watching
 for which character is newline*/

void main() {
	double line_count = 0;
	int character_collector;

	// The loop which counts the line.
	character_collector = getchar();
	while (character_collector != EOF) {
		if (character_collector == '\n') {
			line_count += 1;
		}
		character_collector = getchar();
	}

	//printing the result.
	printf("\nLine count is: %.0f\n", line_count);
}
