#include <stdio.h>
/* This program copies input to output character by character.*/

void main() {
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
