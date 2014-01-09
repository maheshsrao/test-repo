#include <stdio.h>

int main (int atgc, char **argv) {
	int num = 0;
	printf ("enter number: ");
	scanf ("%d", &num);

	printf ("Number: %d\n", num);

	switch (num) {
		case 10:
			printf ("you have entered ten\n");
			break;
		case 11:
			printf ("you have entered eleven\n");
			break;
		case 12:
			printf ("you have entered twelve\n");
			break;
		default:
			printf ("default value\n");
	}

	return 0;
}
