#include <stdio.h>

int main (int argc, char **argv) {
	/* integer array */
	int num [10] = {10, 20, 30, 40};
	int i = 0;
	for (; i <= 10; i++) if (num[i] != 0) printf ("%d\n", num[i]);
	return 0;
}
