#include <iostream>

const unsigned int SIZE_OF_ARRAY = 5;

bool isPrimary(int number) {
	for (int div = 2; div <= sqrt(number); ++div)
	{
		if (number % div == 0) {
			return false;
		}
	}
	return true;
}

int sumOfDivisors(int number) {
	int sumOfDiv = 0;
	for (int div = 1; div <= number / 2; ++div)
	{
		if (number % div == 0) {
			sumOfDiv += div;
		}
	}
	return sumOfDiv;
}

int main() {
	//Task 5:
	//Input: n = 12, k = 15
	//Output : 16

	int n, k, result;
	   std::cout << "Enter n & k (integers): ";
	   std::cin >> n >> k;

	   for (int i = n + 1; ; ++i)
		   if (sumOfDivisors(i) == k) {
			   std::cout << i << std::endl;
			   break;
		   }

	   std::cout << "23 is a primary number: " << std::boolalpha << isPrimary(23) << std::endl;

	return 0;
}