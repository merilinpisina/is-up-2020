#include <iostream>
int main() {
	// GCD while:
	int number1, number2, temp1, temp2;
	std::cout << "Enter two numbers for GCD calculation:\n";
	std::cin >> number1 >> number2;
	temp1 = number1;
	temp2 = number2;

	while (number1 != number2) {
		if (number1 > number2) {
			number1 -= number2;
			continue;
		}
		number2 -= number1;
	}
	std::cout << "GCD: " << number1 << std::endl;

	//if (temp2 > temp1) {
	//	int temp = temp2;
	//	temp2 = temp1;
	//	temp1 = temp;
	//}

	//int gcd = 0;
	//for (int i = 1; i <= temp2; ++i) {
	//	if (temp1 % i == 0 && temp2 % i == 0) {
	//		gcd = i;
	//	}
	//}

	//std::cout << "GCD: " << gcd << std::endl;
	return 0;
}