#include <iostream>

void swapWithoutPtrs(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapCorrect(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapWithPtrs(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

const int MAX_SIZE_ARRAY = 100;

void fibonacci(int edge, int *array) {
	if (edge <= 0) {
		return;
	}

	int n1 = 1, n2 = 1;
	// if edge was a constant -> still no way of creating the array with size = edge
	array[0] = 1;
	array[1] = 1;
	int index = 2;
	while (index < edge) {
		array[index] = array[index - 1] + array[index - 2];
		//*(array + index) = *(array + index - 1) + *(array + index - 2);
		++index;
	}
}

int main() {

	//int a = 5;
	//int *ptr = &a;
	//std::cout << a << std::endl; // 5
	//std::cout << *ptr << std::endl; // 5
	//std::cout << &a << std::endl; // <address>
	//std::cout << ptr << std::endl; // <address>
	//std::cout << std::endl;

	//// swap two numbers 
	//int x, y;
	//std::cout << "Enter two numbers: ";
	//std::cin >> x >> y;

	//swapWithoutPtrs(x, y);
	//std::cout << "Swap incorrectly: " << x << " " << y << std::endl; // the original values
	//swapCorrect(x, y);
	//std::cout << "Swap with references: " << x << " " << y << std::endl; // swapped values
	//swapWithPtrs(&x, &y);
	//std::cout << "Swap with pointers: " << x << " " << y << std::endl; // twice swapped values -> the original values

	// edge -> the first *edge* fibonacci numbers
	int edge = 10;
	std::cout << "The first 10 numbers from the fibonacci sequence:" << std::endl;
	int arr[MAX_SIZE_ARRAY];
	fibonacci(edge, arr);
	if (arr == nullptr) {
		std::cout << "Invalid value for edge!" << std::endl;
		system("pause");
		return 0;
	}

	for (int i = 0; i < edge; ++i) {
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}