#include <iostream>
#include <cstring>
#include <cmath>

void reverse(std::string &str)
{
    std::string copy = str;
    int length = copy.length(), index = length - 1, sindex = 0;

    while (index >= 0)
    {
        str[sindex++] = copy[index--];
    }
}

bool isLowerLetter(char c)
{
    return (c >= 'a' && c <= 'z');
}

char capitalizeLetter(char c)
{
    return isLowerLetter(c) ? (c - 'a' + 'A') : c;
}

void capitalize(std::string &str)
{
    int length = str.length();
    bool shouldCapitalize = true;
    for (std::size_t i = 0; i < length; ++i)
    {
        if (shouldCapitalize)
        {
            str[i] = capitalizeLetter(str[i]);
            shouldCapitalize = false;
        }
        else
        {
            if (str[i] == ' ')
            {
                while (i < length && str[i + 1] == ' ')
                {
                    i++;
                }
                shouldCapitalize = true;
            }
        }
    }
}

std::string findLongestWord(std::string sentence)
{
    std::string currentWord = "", maxLengthWord = "";
    int length = sentence.length();
    for (std::size_t i = 0; i < length; ++i)
    {
        if (sentence[i] == ' ')
        {
            if (currentWord.length() > maxLengthWord.length())
            {
                maxLengthWord = currentWord;
            }
            currentWord.clear(); // currentWord = "";
        }
        else
        {
            currentWord += sentence[i];
        }
    }
    return maxLengthWord;
}

double toFPNumber(std::string s)
{
    double result = 0;
    int coeff = 0;

    size_t pointPosition = s.find('.', 0);
    size_t whole = s.length();
    if (pointPosition != std::string::npos)
    {
        whole = pointPosition;
    }

    if (s.find('.', pointPosition + 1) != std::string::npos)
    {
        std::cout << "Could not parse floating point number with ERROR: Invalid input." << std::endl;
    }

    for(int i = 0; i < whole; ++i) {
        result = result * 10 + s[i] - '0';
    }

    int fp = 0;
    for (int i = whole + 1; i < s.length(); ++i) {
        fp = fp * 10 + s[i] - '0';
        ++coeff;
    }
    return result + fp * pow(10, -2*coeff);
}

// c_str, find
int main()
{
    // std::string s;
    // std::cin >> s;
    // reverse(s);
    // std::cout << "Reversed: " + s << std::endl;

    std::string sentence;
    std::getline(std::cin, sentence);
    // capitalize(sentence);
    std::cout << findLongestWord(sentence) << std::endl;
    return 0;
}