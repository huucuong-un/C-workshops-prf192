#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ENTER 10

int main() {
	char c = 0;
	int noLetters = 0, noDigits = 0, noOthers = 0;
	printf("Enter a string: ");
	while (c != ENTER) {
		c = getchar();
		if (c >= 'O' && c <= '9')
			noDigits++;
		else if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z'))
			noLetters++;
		else if (c != '\n')
			noOthers++;
	}
	
	printf("noDigits: %d\n", noDigits++);
	printf("noLetters: %d\n", noLetters++);
	printf("noOthers: %d", noOthers++);
	
	
	return 0;
}

