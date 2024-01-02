#include <stdio.h>

// Verifying that "getchar() != EOF".

void main() {
	int c;
	int boolean_result;
	
	// Storing the value of "getchar() != EOF" in a variable.
	c = getchar();
	boolean_result = (c != EOF);
	while (boolean_result == 1) {
		putchar(c);
		printf("\nThe latest result of \"getchar() != EOF\" is: %d\n", boolean_result);
		c = getchar();
		boolean_result = (c != EOF);
	}
}
