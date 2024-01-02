#include <stdio.h>
/* This program counts the number of characters, lines and words in a file.*/

/* Defining Symbolic Constants.*/
#define IN_WORD 0	/*Represents whenever the character state is in a word*/
#define OUT_OF_WORD 1	/*Represents whenever ther character state is out or words*/

int main() {
	long char_count, line_count, word_count;
	int char_checker, char_state;

	//The loop that executes the program.
	char_state = OUT_OF_WORD;
	char_count = line_count = word_count = 0;
	while ((char_checker = getchar()) != EOF) {
		++char_count;
		if (char_checker == '\n') {
			++line_count;
			char_state = IN_WORD;
		} 
		if (char_checker == ' ' || char_checker == '\t' || char_checker == '\n') {
			char_state = OUT_OF_WORD;
		}
		else if (char_state == OUT_OF_WORD) {
			++word_count;
			char_state = IN_WORD;
		}
	}

	printf("\nChar Count: %ld\nLine Count: %ld\nWord Count: %ld\n", char_count, line_count, word_count);
	return 0;
}

