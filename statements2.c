#include <stdio.h>

int main (int atgc, char **argv) {
	char ch;

	printf ("char value %x\n", ch);
	printf ("enter char: ");
	scanf ("%c", &ch);

	printf ("Number: %c\n", ch);

	switch (ch) {
		case 'c':
			printf ("you have entered ten\n");
			break;
		case 'g':
			printf ("you have entered eleven\n");
			break;
		case 's':
			printf ("you have entered twelve\n");
			break;
		default:
			printf ("default value\n");
	}

	return 0;
}
