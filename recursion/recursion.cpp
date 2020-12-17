#include <iostream>
#include <cstring>
#include <cmath>

// 0 1 1 2 3 5 8 ...
int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1 || number == 2)
    {
        return 1;
    }

    return (fibonacci(number - 1) + fibonacci(number - 2));

    // (number <= 2 ? (number == 0 ? return 0 : return 1) :  return (fibonacci(number - 1) + fibonacci(number - 2)));
}

int factorial(int number)
{
    if (number <= 1)
        return 1;
    return number * factorial(number - 1);
}

int factorialIterative(int number)
{
    int result = 1;
    for (int i = 1; i <= number; ++i)
    {
        result *= i;
    }
    return result;
}

void reverseIt(std::string &str)
{
    std::string copy = str;
    int length = copy.length(), index = length - 1, sindex = 0;

    while (index >= 0)
    {
        str[sindex++] = copy[index--];
    }
}

void reverse(std::string str)
{
    if (str.length() == 0)
    {
        return;
    }
    reverse(str.substr(1, str.length() - 1));
    std::cout << str[0];
}

void testFibFact()
{
    std::cout << fibonacci(5) << std::endl;
    std::cout << factorial(5) << std::endl;
}

void testReverse()
{
    std::string s;
    std::getline(std::cin, s);
    reverseIt(s);
    std::cout << "Reverse Iteratively:\n";
    std::cout << s << std::endl;
    std::cout << "Reverse Recursively:\n";
    reverse(s);
}

void printArray(char a[])
{
    std::cout << a << std::endl;
}

bool isLowerLetter(char c)
{
    return (c >= 'a' && c <= 'z');
}

bool isUpperLetter(char c)
{
    return (c >= 'A' && c <= 'Z');
}

char toUpperCase(char c)
{
    return isLowerLetter(c) ? (c - 'a' + 'A') : c;
}

char toLowerCase(char c)
{
    return isUpperLetter(c) ? (c - 'A' + 'a') : c;
}

// Input string (char array)
// Output: print all combinations of upper-lower case
// Example: "the" -> "The", "tHe", "thE", "THe", ...
void printAllCombinations(char a[], int i, int l)
{
    if (i == l)
    {
        printArray(a);
        return;
    }

    a[i] = toUpperCase(a[i]);
    printAllCombinations(a, i + 1, l);
    a[i] = toLowerCase(a[i]);
    printAllCombinations(a, i + 1, l);
}

void testCombinations()
{
    char arr[100];
    std::cin >> arr;
    printAllCombinations(arr, 0, std::strlen(arr));
}

int length(char *str)
{
    if (*str == '\0')
        return 0;
    return 1 + length(str + 1);
}

void testLength()
{
    char arr[100];
    std::cin >> arr;
    std::cout << length(arr) << std::endl;
}

bool find(const std::string &str, const std::string &subStr)
{
    return (str.substr(0, subStr.length()) == subStr) ||
           (subStr.length() < str.length() && find(str.substr(1), subStr));
}

int find(const std::string &str, const std::string &subStr, int index)
{
    return str.substr(0, subStr.length()) == subStr ? index : (subStr.length() > str.length()) ? -1 : find(str.substr(1), subStr, index + 1);
}

bool isDigit(char maybeDigit)
{
    return (maybeDigit <= '9' && maybeDigit >= '0');
}

// atoi
int atoi(char *str, int length)
{
    // base case: only one number / element
    if (!isDigit(*str))
    {
        // exception out - second semester  /throw std::invalid_input("message")/
        std::cout << "Invalid input! Check for non-digit characters!\n";
        return -1;
    }

    if (length == 1)
    {
        return *str - '0';
    }

    // bug was: missing degree
    int degree = pow(10, length - 1);
    return (degree * (*str - '0') + atoi(str + 1, length - 1));
}

// '1234' -> (1 * 10 + 2) * 10 + 3 ...

void testFind()
{
    std::string s, subStr;
    std::cin >> s >> subStr;

    // std::cout << (std::boolalpha) << find(s, subStr) << std::endl;

    std::cout << find(s, subStr, 0) << std::endl;
}

void testAtoI()
{
    char s[100];
    std::cin >> s;

    std::cout << atoi(s, length(s)) << std::endl;
}

void printArray(int *arr, int length) {
    // reverse order : cout + printArray
    // printArray + cout

    if (length == 0) {
        return;
    } 
    std::cout << *arr << " ";
    printArray(arr + 1, length - 1);
}

void testPrint() {
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
}

int getMax(int *arr, int n) {
    // *arr = arr[0]
    return (n == 1) ? *arr : std::max(*arr, getMax(arr + 1, n -1));
}

int main()
{

    testAtoI();
    // testPrint();

    return 0;
}