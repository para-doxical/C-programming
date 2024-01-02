#include <stdio.h>
// This program counts the number of characters in a sentence/word.

void main(){
	long counter;

	// The loop that counts the characters.
	counter = 0;
	while (getchar() != EOF) {
		counter += 1;
	}
	printf("\nThe number of characters is: %ld\n", counter);
}
