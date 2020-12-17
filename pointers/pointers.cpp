#include <iostream>
#include <cstring>

int main()
{
    // std::cout << "Pointers" << std::endl;
    // // *, ++p, p++, --, +=, -=, ...
    // // nullptr -> *
    // // int a; int *ptr = &a;
    // // int a;
    // // int &ref = a;
    // // &ref = b;

    // std::cout << "Strings" << std::endl;
    // char arr[10] = "Hello";                        // '\0'    // Hello
    // char array[] = {'H', 'e', 'e', 'l', 'l', 'o'}; // Hello
    // char arr1[] = "Hello";
    // std::cout << arr << std::endl;

    // std::string s = "hello";
    // std::string a; // "" '\0'
    // std::string c("hi");

    // std::cout << s.size() << std::endl;
    // std::cout << std::strlen(s) << std::endl;     // strings have a non-constant capacity
    // std::cout << std::strlen(array) << std::endl; // char arrays always have a constant capacity

    // std::cout << std::strcat(arr, array) << std::endl;
    // std::cout << s + c << std::endl;

    // s = s + c;
    // s += c;

    // std::cout << arr[0] << std::endl; // H
    // std::cout << s[0] << std::endl; // h

    // std::strcpy(arr, array);
    // s = c;

    // std::strcmp(arr, array);  // -> [-1, 1] -> == 0 ? arr = array -> < 0 ? arr < array -> > 0 ? arr > array
    // // s > c, s == c, s < c

    // s.empty(); // -> true if the string is empty (size == 0)
    // arr[0] == '\0'; // -> the char array is empty

    // s.substr(0, 2);

    // std::string test;
    // std::cin >> test;
    // std::cout << test;
    // // Hello, I'm Pesho!
    // // cin.ignore(), getline, ..

    // std::string s = "abc";
    // std::cout << s + " size: " << s.size() << std::endl;
    // std::string ss = "def";
    // std::string result = s + ss;
    // std::cout << result << std::endl;
    // s[0] = 'd';
    // s[1] = 'e';
    // std::cout << s << std::endl;

    std::string first;
    std::string second;
    std::cin >> first >> second;
    int lengthF = first.size(), lengthS = second.size();

    if (lengthF > 0)
    {
        char temp = first[0];
        first[0] = first[lengthF - 1];
        first[lengthF - 1] = temp;
    }

    if (lengthS > 0)
    {
        char temp = second[0];
        second[0] = second[lengthS - 1];
        second[lengthS - 1] = temp;
    }

    std::cout << first << " " << second << std::endl;
    return 0;
}