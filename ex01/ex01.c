#include <stdio.h>

int main() {
	printf("Tabuada: \n");

	for (int index = 2; index <= 10;) {
		for (int current_number = 0; current_number <= 10; current_number++) {
			printf("%ix%i = %i\n", index, current_number, index * current_number);
		}

		index += 2;
	}

	return 0;
}