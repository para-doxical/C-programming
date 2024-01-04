#include <stdio.h>

// A program to print a histogram of the lengths of words in its input.
#define IN 1
#define OUT 0
#define MAX_WD_LEN 50
#define WD_DISP 1

void main() {
	// Declarations.
	int i, j, c, state, present_wd_len;
	int word_lengths[MAX_WD_LEN + WD_DISP];

	// Initializations.
	present_wd_len = 0;
	for (i = 1; i <= MAX_WD_LEN; ++i) {
		word_lengths[i] = 0;
	}
	state = OUT;
	
	// The loop that is the heart of the program.
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				++word_lengths[present_wd_len];
			}
			state = OUT;
		} else {
			if (state == OUT) {
				present_wd_len = 1;
			} else {
				++present_wd_len;
			}
			state = IN;
		}
	}

	// Drawing the horizontal histogram.
	for (i = 1; i <= MAX_WD_LEN; ++i) {
		printf("%3d word: ", i);
		for (j = 0; j < word_lengths[i]; ++j) {
			printf("-");
		}
		printf(" %d\n", word_lengths[i]);
	}
}


