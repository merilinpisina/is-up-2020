#include "pch.h"
#include <iostream>

int main()
{
	// for, while, do{}while
	//std::cout << "Hello World!\n";
	//std::cout << 1 << std::endl;
	//std::cout << 2 << std::endl;
	//std::cout << 3 << std::endl;
	//std::cout << 4 << std::endl;
	//std::cout << 5 << std::endl;


	//std::cout << std::endl;
	//int j = 1;
	// j++ ++j - difference
	// j-- --j - difference
	// j *= 2 <=> j = j * 2
	// j /= 2 <=> j = j / 2
	// j = number
	//for (;;) {
	//	std::cout << j << std::endl;
	//	j++;
	//	/*if (j > 10) break;*/
	//}

	//for (initialization; condition; increment / decrement)
	//{
	//	C++ statement(s);
	//}

	//j++ -> return j; j = j + 1;
	//++j -> j = j + 1; return j;
	// a = b++ & a = ++b
	
	//for (int i = 2; i <= 100; i += 2) {
	//	std::cout << i << std::endl;
	//}


	//int n, result = 1;
	//std::cin >> n;
	//if (n < 0) {
	//	std::cout << "Invalid input" << std::endl;
	//	return 0;
	//}
	//for (int i = n; i >= 1; --i) {
	//	result *= i;
	//}
	//std::cout << "n! = " << result << std::endl;

	//// while (condition) {}
	//int i = n;
	//result = 1;
	//while (i >= 1)
	//{
	//	result *= i;
	//	--i;
	//}
	//std::cout << "n! = " << result << std::endl;

	//result = 1;
	//for (int i = 1; i <= n; ++i) {
	//	result *= i;
	//}
	//std::cout << "n! = " << result << std::endl;

	//int n, fact = 1;
	////std::cin >> n;
	////if (n <= 0) {
	////	return 0;
	////}
	//do {
	//	std::cin >> n;
	//	if (n <= 0) {
	//		std::cout << "Invalid input" << std::endl;
	//	}
	//} while (n <= 0);

	//for (int i = 1; i <= n; ++i, fact *= i) {
	//	std::cout << i << "! = " << fact << std::endl;
	//}

	// do{} while();


	char c;
	std::cin >> c;
	int height = 1;
	std::cin >> height;
	for (int i = 1; i <= height; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << c;
		}
		std::cout << std::endl;
	}

	return 0;
}
