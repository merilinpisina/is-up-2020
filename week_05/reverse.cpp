#include <iostream>

const unsigned int SIZE_OF_ARRAY = 5;

int main() {

	// Reverse an array of integers:
	int arrayToReverse[SIZE_OF_ARRAY];
	for (int i = 0; i < SIZE_OF_ARRAY; ++i) {
		std::cin >> arrayToReverse[i];
	}

	// start = 0, end = SIZE_OF_ARRAY - 1
	// start += 1, end -= 1
	// start < end

	int start = 0, end = SIZE_OF_ARRAY - 1;
	while (start < end) {
		int temp = arrayToReverse[start];
		arrayToReverse[start] = arrayToReverse[end];
		arrayToReverse[end] = temp;

		start++;
		end--;
	}

	//for (int start = 0, end = SIZE_OF_ARRAY - 1; start < end; start++, end--) {
	//	int temp = arrayToReverse[start];
	//	arrayToReverse[start] = arrayToReverse[end];
	//	arrayToReverse[end] = temp;
	//}

	for (int i = 0; i < SIZE_OF_ARRAY; ++i) {
		std::cout << arrayToReverse[i] << " ";
	}


	return 0;
}