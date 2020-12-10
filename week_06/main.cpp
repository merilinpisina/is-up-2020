#include <iostream>
#include <iomanip>
#include <cmath>

//int id (int number) {
//	return number;
//}
//
//bool isPositive(const int num) {
//	return (num > 0);
//}
//
//void myFunction();
//
//void useMyFunction() {
//	myFunction();
//}

//void functionWithArrayArg(int array[], int size /* int *array */) {
//
//}

//Напишете програма, която принтира на конзолата всички числа от N до M, 
//които се делят на 2 и на 3 без остатък, в обратен ред.
//От конзолата ще се чете още едно "спиращо" число S.
//Ако някое от делящите се на 2 и 3 числа е равно на спиращото число, 
//то не трябва да се принтира и програмата трябва да приключи.В противен случай се 
//принтират всички числа до N, които отговарят на условието.

bool divTwo(int number);
bool divThree(int number);

bool divTwoThree(int number) {
	return divTwo(number) && divThree(number);
}

void task_one(int start, int end, int stop) {
	int printStart, printEnd;
	if (stop <= end && stop >= start) {
		printStart = start;
		printEnd = stop - 1;
	} 
	else {
		printStart = start;
		printEnd = end;
	}

	for (int i = printEnd; i >= printStart; --i) {
		if (divTwoThree(i)) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}

// pass by value
int fact(int number) {
	int result = 1;
	for (int i = number; i >= 2; --i) {
		result *= i;
	}
	return result;
}

int testSum(int a = 0, int b = 0, int c = 0) {
	return a + b + c; // a + b + 0 // a + 0 + 0 
}
// testSum() => 0
// testSum(10) => 10 + 0 + 0 => 10 
// testSum(10, 20) => 10 + 20 + 0 => 30 
// testSum(10, 20, 30) => 10 + 20 + 30 => 60 

//int invalidDefault(int number = 2, char whatever) {
//	return number * whatever;
//}

void maxOfTwo(int f, int s) {
	if (f > s) {
		std::cout << f << std::endl;
		return;
	}
	std::cout << s << std::endl;
}

void maxOfTwo(float f, float s) {
	if (f > s) {
		std::cout << f << std::endl;
		return;
	}
	std::cout << s << std::endl;
}

// Write a function that will return how many three digit natural 
// numbers are divisible by either 4 or 5 but not both.
unsigned int countNumbers() {
	unsigned int count = 0;
	for (int i = 100; i < 1000; ++i) 
		if ((i % 4 == 0 && i % 5 != 0) || (i % 4 != 0 && i % 5 == 0))
			++count;
	return count;
}

int countDigits(int number) {
	int digits = 0;
	while (number > 0) {
		++digits;
		number = number / 10;
	}
	return digits;
}

bool isPalindrome(int number) {
	int digits = countDigits(number); // 4
	// number / 10^digits
	// 1221 / 1000 (10^digits) => 1
	// 1221 % 10 
	// number % 10
	while (number != 0) {
		int last = number % 10; // 1, 2
		int first = number / pow(10, (digits - 1)); // 1, 2
		if (last != first) {
			return false;
		}
		 // 1221 - 1 * 10^(4-1) = 1221 - 1000 = 221
		// 22 - 2 * 10 = 2
		number = number - first * pow(10, (digits - 1)); // removes first digit
		// 221 / 10 => 22
		// 2 /10 = 0
		number = number / 10; // removes last digit
		 // digits = 4-2=2
		// digits = 2-2 = 0
		digits -= 2;
	}
	return true;
}


int main(/*...*/) {
	//int num;
	//std::cout << "Enter a number: ";
	//std::cin >> num;

	//invalidDefault(1);
	//int s;
	//std::cin >> s;

	//std::cout << num << "^" << s << " = " << pow(num, s) << std::endl;

	//int n, m, s;
	//std::cin >> n >> m >> s;

	maxOfTwo(1, 2); // maxOfTwo(int, int)
	maxOfTwo(float(1.5), 2.5f); // maxOfTwo(float, float) 

	//do {
	//	std::cout << "Enter a number: ";
	//	std::cin >> num;
	//} while (num < 0);
	//number++;
	//int factOfNumber = fact(num);
	//fact(num);
	//std::cout << num << "! = " << fact(num) << std::endl;


	// int/bool/string/char/long
	// void

	// <return_type> <name> (<parameters/arguments>) { <body> }

	// int funct(int arg) {}
	
	// declaration & definition
	// int a; - declaration
	// a = 5; - definition
	// int a = 5; - declaration & definition

	// declaration
	// <return_type> <name> (<parameters/arguments>);

	// definition 
	// <return_type> <name> (<parameters/arguments>) { <body> }

	// reducing code redundancy
	// code modularity
	// functions provide abstraction


	system("pause");
	return 0;
}

//void myFunction() {
//	std::cout << "This is my first function!" << std::endl;
//}

bool divTwo(int number) {
	return number % 2 == 0;
}

bool divThree(int number) {
	return number % 3 == 0;
}