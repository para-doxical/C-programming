#include <stdio.h>
// This program is meant to try '/c' in the printf argument, where c is an unacceptable character therefore, may produce an error.
void main() {
	printf("Hello world\p");
	/*Output: 
	 	Error Message: unknown escape characetr.
	*/
}
