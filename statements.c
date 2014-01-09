#include <stdio.h>
//#include <conio.h>
#include <strings.h>

int
main (int argc, char **argv) {

	/* lets try out if statement */

	int age = 10; char *name = "Mahesh"; char *sex = "Male";
	if (age < 50) {
		printf ("Age is less than 50! for %s\n", name);
	} else {
		printf ("Name %s, Age: %d, sex: %s\n", name, age, sex);
	}

	for (; age < 100; age += 10) {
		printf ("age added: %d\n", age);
	}

	while (age >= 0) {
		printf ("age: %d\n", age);
		age -= 10;
	}
	return 0;
}
