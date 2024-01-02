#include <stdio.h>
 /* A program to count blanks, tabs and newlines.*/

void main() {
	double blanks_count, tabs_count, newlines_count;
	int char_collector;

	//The loop that initiates the count.
	char_collector = getchar();
	while (char_collector != EOF) {
		if (char_collector == ' ') {
			++blanks_count;
		} else if (char_collector == '\t') {
			++tabs_count;
		} else if (char_collector == '\n') {
			++newlines_count;
		} else {
			;
		}
		char_collector = getchar();
	}

	//Printing the counts.
	printf("\nBlanks Count: %.0f\n", blanks_count);
	printf("\nTabs Count: %.0f\n", tabs_count);
	printf("\nNewlines Count: %.0f\n", newlines_count);
}
