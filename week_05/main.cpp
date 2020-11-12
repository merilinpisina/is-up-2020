#include <iostream>

int main() {

	// Task 6:
	char startLetter, endLetter, skipLetter;
	int wordCount = 0;
	std::cin >> startLetter >> endLetter >> skipLetter;

	for (char firstLetter = startLetter; firstLetter <= endLetter; ++firstLetter) {
		if (firstLetter == skipLetter) {
			continue;
		}
		for (char secondLetter = startLetter; secondLetter <= endLetter; ++secondLetter) {
			if (secondLetter == skipLetter) {
				continue;
			}
			for (char thirdLetter = startLetter; thirdLetter <= endLetter; ++thirdLetter) {
				if (thirdLetter == skipLetter) {
					continue;
				}
				std::cout << firstLetter << secondLetter << thirdLetter << " ";
				++wordCount;
			}
		}
	}
	std::cout << wordCount << std::endl;

	//// Safe cast:
	//char a = 'd';
	//std::cout << '#' << " " << int('#') << std::endl;
	//bool b = true;
	//std::cout << std::boolalpha << b << " " << int(b) << std::endl;


	//// Unsafe conversion (cast):
	//double n = 3.15;
	//std::cout << n << " " << int(n) << std::endl;

	system("pause");
	return 0;
}