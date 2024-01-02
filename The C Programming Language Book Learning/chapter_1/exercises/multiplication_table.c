// A program that prints multiplication table upto 12 times table.
#include <stdio.h>

#define END_OF_MULTIPLICATION 12
#define END_OF_SUB_MULTIPLICATION 12

void main() {
	int sub_multiplication_result;
	
	// The nested loop that prints the multiplication table.
	for (int i = 1; i <= END_OF_MULTIPLICATION; i++) {
		printf("%d Times Table\n------------------------\n", i);
		for (int j = 1; j <= END_OF_SUB_MULTIPLICATION; j++) {
			sub_multiplication_result = i*j;
			printf("%d x %d = %d\n", i, j, sub_multiplication_result);
		}
	}
}
			
