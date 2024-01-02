#include <stdio.h>

/* A program to copy its input to its output, replacing each tab by \t,
   each backspace by \b, and each backslash by \\ */

int main() {
	int character_collector;

	// The loop which implements the replacement.
	character_collector = getchar();
	while (character_collector != EOF) {
		if (character_collector == '\t') {
			putchar('\\');
			putchar('t');
		}else if (character_collector == '\b') {
			putchar('\\');
			putchar('b');
		}else if (character_collector == '\\') {
			putchar('\\');
			putchar('\\');
		}else {
			putchar(character_collector);
		}
		character_collector = getchar();
	}
	return 0;
}
