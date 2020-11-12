#include <iostream>

const unsigned int SIZE_MAX_PASCAL = 50;

int main() {

	// Pascal triangle
	// input: height
	// output: the triangle with the input height

	int height;
	std::cin >> height;

	// [row][col]
	int pascalTriangle[SIZE_MAX_PASCAL][SIZE_MAX_PASCAL];
	for (int i = 0; i < SIZE_MAX_PASCAL; ++i)
		for (int j = 0; j < SIZE_MAX_PASCAL; ++j)
			pascalTriangle[i][j] = 0;

	for (int i = 0; i < height; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (i == j || j == 0) {
				pascalTriangle[i][j] = 1;
			}
			else {
				pascalTriangle[i][j] =
					pascalTriangle[i - 1][j] +
					pascalTriangle[i - 1][j - 1];
			}
		}
	}

	for (int i = 0; i < height; ++i) {
		for (int j = 0; j <= i; ++j)
			std::cout << pascalTriangle[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}