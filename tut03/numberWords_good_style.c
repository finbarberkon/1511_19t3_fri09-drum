// Author: Finbar Berkon
// Date: 06/03/18
// tut02 exercise 4: convert numbers to words

#include <stdio.h>

int main(void) {
	int input;

	printf("Please enter an integer: ");
	scanf("%d", &input);

	printf("You entered ");

	if (input < 1) {
		printf("a number less than one.\n");
	}

	// if 1-5, add that number to end of line
	else if (input == 1) {
		printf("one.\n");
	} else if (input == 2) {
		printf("two.\n");
	} else if (input == 3) {
		printf("three.\n");
	} else if (input == 4) {
		printf("four.\n");
	} else if (input == 5) {
		printf("five.\n");
	}

	else if (input > 5) {
		printf("a number greater than five.\n");
	}

	return 0;
}
