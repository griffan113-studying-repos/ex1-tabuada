#include <stdio.h>

int main() {
	printf("Tabuada: \n");
<<<<<<< HEAD

	for (int index = 2; index <= 10;) {
=======
	
	for (int index = 1; index <= 10; index++) {
>>>>>>> a73b7b23b6db2e2d62b70c6d8e8680af9a701ff9
		for (int current_number = 0; current_number <= 10; current_number++) {
			printf("%ix%i = %i\n", index, current_number, index * current_number);

			if (current_number == 10) printf("\n");
		}

<<<<<<< HEAD
		index += 2;
=======
>>>>>>> a73b7b23b6db2e2d62b70c6d8e8680af9a701ff9
	}

	return 0;
}