#include <stdio.h>

/* In here, I explain how I would test the word count program and the kinds of
 input that are most likely to uncover bugs if there are any.

 Note: This program is not meant to be compiled or tested*/

int main() {
	/* How I would test  the word count porgram:

	  (1) I would compile the program into an executable file.
	  (2) I would then run the executable file.
	  (3) I would type in some streams of characters whose number of words,
	      number of  lines and number of characters are known.
	  (4) I would compare the result of the program with the actual answer.
	*/

	/* The kinds of inputs that are likely to uncover bugs if there are any:
	   (1) Empty inputs. E.g. "".
	   (2) Inputs that contains only tab, newlines and whitespaces but no 
	       ordinary characters. E.g. "	 ".
	   (3) Inputs with just one word. E.g. "hello".
	   (4) Inputs with several words and newlines. 
	   	E.g. "hello how are you.
		      I hope you are doing well
		      Greet mummy for me."
	*/
	return 0;
}
