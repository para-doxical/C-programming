#include <stdio.h>

/*A program to copy its input to its output, replacing each string
 of one or more blanks by a single blank.*/

int main() {
	int blanks_count, character_collector;

	// The loop that executes the IO.
	blanks_count = 0;
	character_collector = getchar();
	while (character_collector != EOF) {
		if (character_collector == ' ') {

			/*This if statement ensures blanks are printed only 
			  when blanks_count does not exceed 1.*/
			if (blanks_count < 1) {
				++blanks_count;
				putchar(character_collector);
			}
		} else {
			putchar(character_collector);
		}
		character_collector = getchar();
	}
	return 0;
}

