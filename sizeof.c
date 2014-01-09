#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	printf ("size of integer: %ld\n", sizeof (int));
	printf ("size of char: %ld\n", sizeof (char));
	printf ("size of long: %ld\n", sizeof (long));
	printf ("size of long integer: %ld\n", sizeof (long int));
	printf ("size of double : %ld\n", sizeof (double));
	printf ("size of float : %ld\n", sizeof (float));
	return 0;
}
